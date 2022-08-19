TARGET = main
OBJECTS = main.o array.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
array.o : array.cpp
	g++ -c array.cpp
clean :
	rm ${OBJECTS} ${TARGET}
