TARGET = main
OBJECTS = main.o string.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
string.o : string.cpp
	g++ -c string.cpp
clean :
	rm ${OBJECTS} ${TARGET}
