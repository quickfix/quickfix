#!/usr/bin/ruby
templateFile = ARGV[0]
genFile = ARGV[1]
regexp = ARGV[2]
replace = ARGV[3]

if( genFile == nil || regexp == nil || replace == nil )
  raise StandardError
end

command = 
  "replace \"" + regexp + ":U\" " + replace.upcase + 
  " \"" + regexp + "\" " + replace +
  " -- <" + templateFile + "> " + genFile

exec(command)
