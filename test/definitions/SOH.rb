sohFile = File.open("SOH", File::WRONLY | File::CREAT)
sohFile.write("\001")
sohFile.close
