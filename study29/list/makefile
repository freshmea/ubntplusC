TARGET = main
OBJECTS = main.o list.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
list.o : list.cpp
	g++ -c list.cpp
clean :
	rm ${OBJECTS} ${TARGET}
