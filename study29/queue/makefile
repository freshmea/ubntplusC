TARGET = main
OBJECTS = main.o queue.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
queue.o : queue.cpp
	g++ -c queue.cpp
clean :
	rm ${OBJECTS} ${TARGET}
