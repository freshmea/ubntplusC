TARGET = tt
OBJECTS = main.o board.o

${TARGET} : ${OBJECTS}
	gcc -o ${TARGET} ${OBJECTS}
main.o : main.c
	gcc -c main.c
board.o : board.c
	gcc -c board.c
clean :
	rm ${OBJECTS} ${TARGET}
