case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C35"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\process\classic\windows\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include" -I"\$(ISE_LIBRARY)\library\vision2\spec\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = static_analyzer$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C35_c.o 

OLDOBJECTS =  fu2008.o fu2008d.o ha1984.o ha1984d.o ta1986.o ta1986d.o he1999.o \
	he1999d.o bi2001.o bi2001d.o bi1998.o bi1998d.o ta1988.o ta1988d.o \
	pr1997.o pr1997d.o pr2000.o pr2000d.o ha1985.o ha1985d.o tr2002.o \
	tr2002d.o ac1994.o ac1994d.o ac2013.o ac2013d.o li2003.o li2003d.o \
	ta1987.o ta1987d.o se1982.o se1982d.o kl2005.o kl2005d.o kl2009.o \
	kl2009d.o kl2006.o kl2006d.o kl2010.o kl2010d.o kl2007.o kl2007d.o \
	kl2011.o kl2011d.o ki1981.o ki1981d.o ki1996.o ki1996d.o ev1993.o \
	ev1993d.o ev2012.o ev2012d.o ev1989.o ev1989d.o ki1995.o ki1995d.o \
	ev1990.o ev1990d.o we1992.o we1992d.o ev1983.o ev1983d.o ki2004.o \
	ki2004d.o kl1991.o kl1991d.o 

all: Cobj35.o

Cobj35.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj35.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

