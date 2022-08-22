TARGET = main
OBJECTS = main.o queue.o
OBJECTS2 = main.o queue.o array.o

${TARGET} : ${OBJECTS2}
	g++ -o ${TARGET} ${OBJECTS2}
main.o : main.cpp
	g++ -c main.cpp
queue.o : queue.cpp
	g++ -c queue.cpp
clean :
	rm ${OBJECTS} ${TARGET}
