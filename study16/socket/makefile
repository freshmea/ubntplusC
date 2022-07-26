TARGET = sever
OBJECTS = sever.o -lpthread

${TARGET} : ${OBJECTS}
	gcc -o ${TARGET} ${OBJECTS}
sever.o : sever.c
	gcc -c sever.c
clean :
	rm ${OBJECTS} ${TARGET}
