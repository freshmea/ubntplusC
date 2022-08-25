TARGET = main
OBJECTS = main.o invalidIndex.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
invalidIndex.o : invalidIndex.cpp
	g++ -c invalidIndex.cpp
clean :
	rm ${OBJECTS} ${TARGET}
