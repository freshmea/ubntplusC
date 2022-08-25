TARGET = main
OBJECTS = main.o string.o stringRep.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
string.o : string.cpp
	g++ -c string.cpp
stringRep.o : stringRep.cpp
	g++ -c stringRep.cpp
clean :
	rm ${OBJECTS} ${TARGET}
