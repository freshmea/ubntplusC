TARGET = main
OBJECTS = main.o stack.o

${TARGET} : ${OBJECTS}
	gcc -o ${TARGET} ${OBJECTS}
main.o : main.c
	gcc -c main.c
stack.o : stack.c
	gcc -c stack.c
clean :
	rm ${OBJECTS} ${TARGET}
