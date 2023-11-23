# Makefile for f2022, ecs36b
#
# g++ -std=c++14 test_GPS.cpp GPS.cpp -o test_GPS
#
# example: $ ./test_GPS 48.88 2.3

CC 	=	g++ -std=c++14
CFLAGS 	= 	-g -I/opt/homebrew/include
LDFLAGS = 	-L/opt/homebrew/lib -ljsoncpp -lmicrohttpd -ljsonrpccpp-common	\
		-ljsonrpccpp-server -lcurl -ljsonrpccpp-client

OBJS	= 	Thing.o GPS.o Person.o JvTime.o Core.o Robot.o
CLASSES	= 	Thing.h GPS.h Person.h JvTime.h Core.h Robot.h


# CLINC = -I$(CLANG_ROOT)/usr/include/c++/v1 -D_MEMORY_LAYOUT_
CLINC = -D_MEMORY_LAYOUT_

CLANG_ROOT = /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk

# rules
all: 	test_MI MI_AllInOne.txt VI_AllInOne.txt

#
MI_AllInOne.txt:
	g++ -cc1 -std=c++14 -fdump-record-layouts $(CLINC) test_MI_allin1.cpp > MI_AllInOne.txt

VI_AllInOne.txt:
	g++ -cc1 -std=c++14 -fdump-record-layouts $(CLINC) test_VI_allin1.cpp > VI_AllInOne.txt

Thing.o:		Thing.cpp $(CLASSES)
	$(CC) -c $(CFLAGS) Thing.cpp

GPS.o:		GPS.cpp $(CLASSES)
	$(CC) -c $(CFLAGS) GPS.cpp

JvTime.o:	JvTime.cpp $(CLASSES)
	$(CC) -c $(CFLAGS) JvTime.cpp

Person.o:	Person.cpp $(CLASSES)
	$(CC) -c $(CFLAGS) Person.cpp

Robot.o:	Robot.cpp $(CLASSES)
	$(CC) -c $(CFLAGS) Robot.cpp

Core.o:		Core.cpp $(CLASSES)
	$(CC) -c $(CFLAGS) Core.cpp

test_MI.o:	test_MI.cpp $(CLASSES)
	$(CC) -c $(CFLAGS) test_MI.cpp

test_MI:	test_MI.o $(OBJS)
	$(CC) test_MI.o $(OBJS) -o test_MI $(LDFLAGS)

clean:
	rm -f *.o *~ core test_MI *I_AllInOne.txt



