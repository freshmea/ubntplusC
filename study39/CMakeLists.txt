# gcc booklist.cpp -o main2 -I /usr/include/cppconn -lmysqlcppconn -lstdc++

# gcc -o main booklist.c -I/usr/include/mysql -lmysqlclient -L/usr/lib

# gcc -o booklist2 booklist2.c -lodbc

# booklist.cpp 를 컴파일 하기위 한 cmakelists.txt 를 만들어줘

cmake_minimum_required(VERSION 3.10)
project(BookList)

set(CMAKE_CXX_STANDARD 14)

find_package(Threads REQUIRED)

include_directories(/usr/include/cppconn)
link_directories(/usr/lib)

add_executable(BookList booklist.cpp)

target_link_libraries(BookList mysqlcppconn)