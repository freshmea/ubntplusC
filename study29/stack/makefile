TARGET = main
OBJECTS = main.o stack.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
stack.o : stack.cpp
	g++ -c stack.cpp
clean :
	rm ${OBJECTS} ${TARGET}
