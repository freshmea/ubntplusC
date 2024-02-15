# CC = gcc
# CFLAGS = -g -Wall
# TARGET = main
# Object = main.o

# $(TARGET) : $(Object)
# 	gcc -o $(TARGET) $(Object)

# main.o : main.c main.h

# clean :
# 	rm $(TARGET) $(Object)

main : main.o foo.o bar.o
	gcc -o main main.o foo.o bar.o

main.o : foo.h bar.h main.c
foo.o : foo.c foo.h
bar.o : bar.c bar.h

clean :
	rm main main.o foo.o bar.o