#include <stdio.h>
#include <sql.h>
#include <sqlext.h>

int main() {
    SQLHENV env;
    SQLHDBC dbc;
    SQLHSTMT stmt;
    SQLRETURN ret;
    SQLCHAR outstr[1024];
    SQLSMALLINT outstrlen;

    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
    SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);
    SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);

    char connStr[] = "DRIVER={MySQL ODBC 5.3 ANSI Driver};SERVER=localhost;DATABASE=madang;USER=root;PASSWORD=0000;";
    ret = SQLDriverConnect(dbc, NULL, connStr, SQL_NTS, outstr, sizeof(outstr), &outstrlen, SQL_DRIVER_COMPLETE);
    if (ret == SQL_SUCCESS_WITH_INFO) {
        printf("Driver reported the following diagnostics\n");
    }

    SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);
    SQLExecDirect(stmt, "SELECT * FROM Book", SQL_NTS);

    SQLCHAR columnValue[64];
    SQLSMALLINT columnValueLength, columnNum;

    while (SQLFetch(stmt) == SQL_SUCCESS) {
        for(columnNum = 1; ; columnNum++) {
            ret = SQLGetData(stmt, columnNum, SQL_C_CHAR, columnValue, sizeof(columnValue), &columnValueLength);
            if (ret == SQL_NO_DATA) break;

            printf("%s \t", columnValue);
        }
        printf("\n");
    }

    SQLFreeHandle(SQL_HANDLE_STMT, stmt);
    SQLDisconnect(dbc);

    SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    SQLFreeHandle(SQL_HANDLE_ENV, env);

    return 0;
}