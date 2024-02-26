#include <mysql.h>
#include <stdio.h>

int main() {
    MYSQL *con = mysql_init(NULL);

    if (con == NULL) {
        fprintf(stderr, "%s\n", mysql_error(con));
        return 1;
    }

    if (mysql_real_connect(con, "localhost", "root", "0000", 
          "madang", 3306, NULL, 0) == NULL) {
        fprintf(stderr, "%s\n", mysql_error(con));
        mysql_close(con);
        return 1;
    }  

    if (mysql_query(con, "SELECT * FROM Book")) {
        fprintf(stderr, "%s\n", mysql_error(con));
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_store_result(con);

    if (result == NULL) {
        fprintf(stderr, "%s\n", mysql_error(con));
        mysql_close(con);
        return 1;
    }

    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) { 
        printf("%s \t", row[0]);
        printf("%s \t", row[1]);
        printf("%s \t", row[2]);
        printf("%s \n", row[3]);
    }

    mysql_free_result(result);
    mysql_close(con);

    return 0;
}