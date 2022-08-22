TARGET = main
OBJECTS = main.o stack.o
OBJECTS2 = main.o stack.o array.o

${TARGET} : ${OBJECTS2}
	g++ -o ${TARGET} ${OBJECTS2}
main.o : main.cpp
	g++ -c main.cpp
stack.o : stack.cpp
	g++ -c stack.cpp
clean :
	rm ${OBJECTS} ${TARGET}
