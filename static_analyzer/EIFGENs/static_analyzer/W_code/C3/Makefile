INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\library\process\classic\windows\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\library\wel\spec\windows\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\library\vision2\spec\include"
SHELL = /bin/sh
CC = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/mingw/bin/gcc"
CPP = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
LDSHAREDFLAGS =  
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/studio/spec/win64/lib/mingw/wkbench.a"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/studio/config/win64/templates
LIBS = 
MAKE = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/msys/1.0/bin/make.exe"
AR = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/mingw/bin/ar"
LD = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/msys/1.0/bin/cp"
CP = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/msys/1.0/bin/cp"
RANLIB = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/mingw/bin/ranlib.exe"
RM = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/msys/1.0/bin/rd"
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/msys/1.0/bin/touch" finished
PATH := C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL/gcc/win64/mingw/libexec/gcc/mingw32/3.4.2;C:\ProgramData\Oracle\Java\javapath;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files\Hewlett-Packard\SimplePass\;C:\Program Files (x86)\Windows Live\Shared;C:\Program Files (x86)\ATI Technologies\ATI.ACE\Core-Static;C:\MinGW\bin;C:\MinGW\MSYS\1.0\bin;C:\Program Files\Java\jdk1.8.0_25\bin;C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\studio\spec\win64\bin;C:\Users\SadmanSakib\Desktop\EECS 3311\ETF\exe; 
SYSTEM_IN_DYNAMIC_LIB = static_analyzer.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C3_c.o 

OLDOBJECTS =  et934.o et934d.o et933.o et933d.o et931.o et931d.o et932.o et932d.o \
	c_930.o c_930d.o et929.o et929d.o va928.o va928d.o et927.o et927d.o \
	ev926.o ev926d.o ev925.o ev925d.o ev957.o ev957d.o ev956.o ev956d.o \
	ev955.o ev955d.o ev954.o ev954d.o we953.o we953d.o kl952.o kl952d.o \
	uc951.o uc951d.o ev950.o ev950d.o we949.o we949d.o we948.o we948d.o \
	we947.o we947d.o ev946.o ev946d.o we945.o we945d.o we944.o we944d.o \
	we943.o we943d.o we942.o we942d.o we941.o we941d.o ev940.o ev940d.o \
	we939.o we939d.o we938.o we938d.o we937.o we937d.o we936.o we936d.o \
	we935.o we935d.o 

all::  Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

