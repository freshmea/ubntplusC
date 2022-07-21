TARGET = tt
OBJECTS = main.o string.o

${TARGET} : ${OBJECTS}
	gcc -o ${TARGET} ${OBJECTS}
main.o : main.c
	gcc -c main.c
string.o : string.c
	gcc -c string.c
clean :
	rm ${OBJECTS} ${TARGET}
