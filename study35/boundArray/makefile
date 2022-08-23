TARGET = main
OBJECTS = main.o boundArray.o safeArray.o array.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
array.o : array.cpp
	g++ -c array.cpp
safeArray.o : safeArray.cpp
	g++ -c safeArray.cpp
boundArray.o : boundArray.cpp
	g++ -c boundArray.cpp
clean :
	rm ${OBJECTS} ${TARGET}
