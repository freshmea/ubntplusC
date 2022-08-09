TARGET = main
OBJECTS = main.o queue.o

${TARGET} : ${OBJECTS}
	gcc -o ${TARGET} ${OBJECTS}
main.o : main.c
	gcc -c main.c
queue.o : queue.c
	gcc -c queue.c
clean :
	rm ${OBJECTS} ${TARGET}
