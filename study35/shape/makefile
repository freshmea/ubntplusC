TARGET = main
OBJECTS = main.o shape.o rectangle.o circle.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
shape.o : shape.cpp
	g++ -c shape.cpp
rectangle.o : rectangle.cpp
	g++ -c rectangle.cpp
circle.o : circle.cpp
	g++ -c circle.cpp
clean :
	rm ${OBJECTS} ${TARGET}
