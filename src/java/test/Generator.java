import java.lang.reflect.*;

class Generator {

  static class ClassGenerator {
    ClassGenerator(String typeName) throws ClassNotFoundException {
      type = Class.forName(typeName);
      output = new String();
      depth = 0;
      className = new String();
    }

    public String generate() throws Exception {
      out("#include \"JVM.h\""); out("");
      openClass();
      generateInitialization();
      generateConstructors();
      generateMethods();
      generateMembers();
      closeClass();
      return output;
    }

    private void generateInitialization() {
      out(className + "(jobject obj, ENV& env) : JVMObject(obj, env)");
      openBracket();

      out("JVMClass type = getClass();");
      Method[] methods = type.getMethods();
      for(int i = 0; i < methods.length; ++i) {
        out("method" + (i+1) + " = type.getMethodID(" 
            + "\"" + methods[i].getName() + "\", "
            + methodToSymbol(methods[i]) + ");");
      }

      closeBracket();
    }

    private void generateConstructors() throws SecurityException {
      Constructor[] ctors = type.getConstructors();
      for(int i = 0; i < ctors.length; ++i) {
        Constructor ctor = ctors[i];

        out(
            className + "("
            + generateParameters(ctor.getParameterTypes(), true) + ")");
        openBracket();
        generateCtor(ctor, i+1);
        closeBracket();
      }
    }

    private void generateMethods() throws SecurityException {
      Method[] methods = type.getMethods();
      for(int i = 0; i < methods.length; ++i) {
        Method method = methods[i];
        Class returnType = method.getReturnType();

        out(
            javaToCPPClass(returnType) + " "
            + methods[i].getName() + "("
            + generateParameters(method.getParameterTypes(), true) + ")");
        openBracket();
        generateMethod(method, i+1);
        closeBracket();
      }
    }

    private String generateParameters(Class[] parameters, boolean withTypes) {
      String result = new String();
      for(int i = 0; i < parameters.length; ++i) {
        if(withTypes)
          result += javaToCPPClass(parameters[i]);
        result += (" p" + (i+1));
        if(i != parameters.length - 1 ) result += ", ";
      }
      return result;
    }

    private void generateCtor(Constructor ctor, int id) {
      Class[] parameters = ctor.getParameterTypes();

      String result = new String();
      out("m_env.getEnv().CallVoidMethod( m_obj, ctor" + id 
          + (parameters.length != 0 ? "," : "") 
          + generateParameters(ctor.getParameterTypes(), false) + " );");
    }

    private void generateMethod(Method method, int id) {
      Class[] parameters = method.getParameterTypes();
      Class returnType = method.getReturnType();
      boolean primitive = returnType.isPrimitive();

      String result = new String();
      out((returnType == Void.TYPE ? "" : "return ")
          + (!primitive ? javaToCPPClass(returnType) + "(" : "")
          + "m_env.getEnv()." + callType(returnType)
          + "( m_obj, method" + id + (parameters.length != 0 ? "," : "") 
          + generateParameters(method.getParameterTypes(), false)
          + (!primitive ? " ), m_env" : "") + " );");
      
    }

    private void generateMembers() {
      Method[] methods = type.getMethods();
      Constructor[] ctors = type.getConstructors();

      for(int i = 0; i < ctors.length; ++i) {
        out("jmethodID ctor" + (i+1) + ";"); 
      }
      for(int i = 0; i < methods.length; ++i) {
        out("jmethodID method" + (i+1) + ";"); 
      }
    }

    private String callType(Class type) {
      String result = new String();
      String name = type.getName();
      if(type.isPrimitive()) {
        name.toLowerCase();
        result += Character.toUpperCase(name.charAt(0));
        result += name.substring(1);
      }
      else
        result += "Object";
      return "Call" + result + "Method";
    }

    private void tab() {
      for(int i = 0; i <= depth; ++i)
        output += "  ";
    }

    private void openBracket() {
      out("{");
      depth += 1;
    }

    private void closeBracket() {
      depth -= 1;
      out("};");
    }

    private void openClass() {
      String name = type.getName();
      int start = 0;

      for(int index = name.indexOf('.', start); 
          index != -1;
          index = name.indexOf('.', start)) {
                
        out("namespace " + name.substring(start, index));
        openBracket();
        start = index + 1;
      }
      className = name.substring(start);
      out("class " + className + " : public JVMObject");
      openBracket();
    }

    private String javaToCPPClass(Class type) {
      if(type == Void.TYPE) return "void";
      if(type.isPrimitive()) return "j" + type.getName();

      String name = type.getName();
      String result = new String();

      for(int i = 0; i < name.length(); ++i) {
        if(name.charAt(i) == '.')
          result += "::";
        else
          result += name.charAt(i);
      }
      if(name.charAt(0) == '[') return "jobject";
      return result;
    }
    
    private String classToSymbol(Class type) {
      if(type == Void.TYPE) return "V";
      if(type == Boolean.TYPE) return "Z";
      if(type == Byte.TYPE) return "B";
      if(type == Character.TYPE) return "C";
      if(type == Short.TYPE) return "S";
      if(type == Integer.TYPE) return "I";
      if(type == Long.TYPE) return "J";
      if(type == Float.TYPE) return "F";
      if(type == Double.TYPE) return "D";
      return "L" + type.getName().replace('.', '/') + ";";
    }

    private String methodToSymbol(Method method) {
      String result = new String();
      Class[] parameters = method.getParameterTypes();
      Class returnType = method.getReturnType();

      result += "\"(";
      for(int i = 0; i < parameters.length; ++i) {
        result += classToSymbol(parameters[i]);
      }
      result += ")";
      result += classToSymbol(returnType) + "\"";
      return result;
    }
      
    private void closeClass() {
      while(depth != 0) closeBracket();
    }

    private void out(String output) {
      tab();
      this.output += output + "\n";
    }
         
    private Class type;
    private String output;
    private int depth;
    private String className;
  }

  public static void main(String args[]) throws Exception {
    if(args.length != 1) 
      throw new Exception("not enough arguments");

    ClassGenerator classGenerator = new ClassGenerator(args[0]);
    System.out.print(classGenerator.generate());
  }
}
