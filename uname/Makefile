CC = arm-linux-gnueabihf-gcc
CFLAGS = -Wall #Create shared library

all:libuname.so
	@echo "create libuname.so and uname.o"
libuname.so:uname.o
	$(CC) -shared -o libuname.so uname.o
uname.o:uname.c
	$(CC) -c -Wall -fPIC uname.c -o uname.o

clean:
	rm -r *.o *.so
	
# CROSS_COMPILE=

# CC = gcc
# CFLAGS = -Wall #Create shared library

# APP_NAME= uname
# PATH=/usr/lib

# all:libuname.so
# 	@echo "entrnaod a uname"
# libuname.so:uname.o
# 	gcc -shared -o libuname.so uname.o
# uname.o:uname.c
# 	gcc -c -Wall -fPIC uname.c -o uname.o

# all:
# 	@echo "entrnaod a uname"
	
# libuname.so:uname.o
# 	gcc -shared -o libuname.so uname.o
# uname.o:uname.c
# 	gcc -c -Wall -fPIC uname.c -o uname.o

