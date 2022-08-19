TARGET = main
OBJECTS2 = main.o employee.o string.o
OBJECTS = main.o employee.o

${TARGET} : ${OBJECTS2}
	g++ -o ${TARGET} ${OBJECTS2}
main.o : main.cpp
	g++ -c main.cpp
employee.o : employee.cpp
	g++ -c employee.cpp
clean :
	rm ${OBJECTS} ${TARGET}
