TARGET = main
OBJECTS = main.o list.o

${TARGET} : ${OBJECTS}
	gcc -o ${TARGET} ${OBJECTS}
main.o : main.c
	gcc -c main.c
list.o : list.c
	gcc -c list.c
clean :
	rm ${OBJECTS} ${TARGET}
