TARGET = main
OBJECTS = main.o safeArray.o
OBJECTS2 = main.o safeArray.o array.o

${TARGET} : ${OBJECTS2}
	g++ -o ${TARGET} ${OBJECTS2}
main.o : main.cpp
	g++ -c main.cpp
safeArray.o : safeArray.cpp
	g++ -c safeArray.cpp
clean :
	rm ${OBJECTS} ${TARGET}
