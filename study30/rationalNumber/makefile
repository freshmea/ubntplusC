TARGET = main
OBJECTS = main.o rationN.o

${TARGET} : ${OBJECTS}
	g++ -o ${TARGET} ${OBJECTS}
main.o : main.cpp
	g++ -c main.cpp
rationN.o : rationN.cpp
	g++ -c rationN.cpp
clean :
	rm ${OBJECTS} ${TARGET}
