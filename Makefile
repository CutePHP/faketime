$(CC) = gcc
ALL: faketime libfaketime.so

faketime: src/main.c
	$(CC) -o faketime src/main.c

libfaketime.so:	src/libfaketime.c
	$(CC) -o libfaketime.so -shared src/libfaketime.c
clean: 
	rm -f ./faketime ./libfaketime.so