This directory contains a working GCJ (GNU Java Compiler) 4.4.0 compiled for
Win32. You can use it to compile .java and .class files to Win32 .exe files.
(There are some bugs, restrictions and incompatibilities between e.g.
OpenJDK and GNU ClassPath, the Java standard library GCJ 4.4 uses. So your
Java programs won't work out-of-the-box, but it's possible to make small
porting changes to make them work.)

It has been tested and found working on Windows XP and Wine 1.2 on
Ubuntu Lucid.

The binaries are from MinGW (thus they are free software under the GPL,
parts under different free licenses, see http://www.mingw.org/license).
Most of the files were extracted from archives downloaded from
http://sourceforge.net/projects/mingw/files/MinGW/Base/gcc/Version4/Previous%20Release%20gcc-4.4.0/
on 2012-06-30.

Example invocation in debug mode (with line numbers in exception stack
traces):

  bin\gcj -static-libgcj -static-libgcc --main=Prog -g -o prog.exe P*.java

Example invocation in optimized mode (without line numbers in exception stack
traces):

  bin\gcj -static-libgcj -static-libgcc --main=Prog -s -O2 -o prog.exe P*.java

If you get ExceptionInInitializerError when trying to use the classes Date,
SimpleDateFormat or Calendar, e.g.

  Exception in thread "main" java.lang.ExceptionInInitializerError
     at java.lang.Class.initializeClass(t.exe)
     at java.util.Calendar.getInstance(t.exe)
     at t.main(t.exe)
  Caused by: java.lang.NullPointerException
     at java.io.InputStreamReader.read(t.exe)
     at java.io.BufferedReader.fill(t.exe)
     at java.io.BufferedReader.readLine(t.exe)
     at java.util.Properties.load(t.exe)
     at java.util.Properties.load(t.exe)
     at java.util.Calendar.<clinit>(t.exe)
     at java.lang.Class.initializeClass(t.exe)
     ...2 more

, then add libgcj_properties.a like this:

  bin\gcj -Wl,--whole-archive -lgcj_properties.a -Wl,--no-whole-archive -static-libgcj -static-libgcc --main=Prog -s -O2 -o prog.exe P*.java

You can add the bin directory to the PATH. After that you can invoke gcj
directly (without the `bin\').

__END__
