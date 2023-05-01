CC = arm-linux-gnueabihf-gcc
CFLAGS = -Wall -fPIC

all:libcat.so
	@echo "create libcat.so and cat.o"
	sudo cp libcat.so /usr/lib/
	scp libcat.so debian@192.168.7.2:/home/debian/
	ssh -t debian@192.168.7.2 "sudo cp libcat.so /usr/lib/" 
libcat.so:cat.o
	$(CC) -shared -o $@ $< 
cat.o:cat.c
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -r *.o *.so
	