TARGET = main
OBJECTS = main.o complex.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
complex.o : complex.cpp
	g++ -c complex.cpp
clean :
	rm ${OBJECTS} ${TARGET}
