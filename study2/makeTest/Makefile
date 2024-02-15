CC = gcc
CFLAGS = -g -Wall
TARGET = main
Object = main.o foo.o bar.o

$(TARGET) : $(Object)
	gcc -o $(TARGET) $(Object)

main.o : main.h main.c
foo.o : foo.c foo.h
bar.o : bar.c bar.h

clean :
	rm $(TARGET) $(Object)