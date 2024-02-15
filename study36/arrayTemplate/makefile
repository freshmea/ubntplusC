TARGET = main
OBJECTS = main.o complex.o
OBJECTS2 = main.o complex.o

${TARGET} : ${OBJECTS2}
	g++ -o ${TARGET} ${OBJECTS2}
main.o : main.cpp
	g++ -c main.cpp
safeArray.o : safeArray.cpp
	g++ -c safeArray.cpp
complex.o : complex.cpp
	g++ -c complex.cpp
clean :
	rm ${OBJECTS} ${TARGET}
