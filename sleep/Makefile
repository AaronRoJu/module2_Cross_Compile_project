CC = arm-linux-gnueabihf-gcc
CFLAGS = -Wall #Create shared library


all: libsleep.so
		@echo "create libsleep.so and sleep.o"
		sudo cp libsleep.so /usr/lib/
		scp libsleep.so debian@192.168.7.2:/home/debian/
		ssh -t debian@192.168.7.2 "sudo cp libsleep.so /usr/lib/" 


libsleep.so: sleep.o
	$(CC) -shared -o libsleep.so sleep.o

sleep.o: sleep.c
	$(CC) -c -Wall -fPIC sleep.c -o sleep.o	

clean:
	rm -rf *.o *.so







