//
// Created by ccfuncy on 2024-04-01.
//
#include<stdio.h>
#include <stdarg.h>

#define PRINTLNF(format,...) printf(format"\n",##__VA_ARGS__ )

#define  PRINT_INT(value) PRINTLNF(#value": %d",value)
void  Printlnf(const char * format,...){
    va_list args;
    va_start(args,format);
    vprintf(format,args);
    printf("\n");
    va_end(args);
}

int main(){
    int val=2;
    Printlnf("Hello World! %d",val);
    PRINTLNF("Hello World! %d",val);
    PRINTLNF("Hello World! %d");

    PRINT_INT(val);
    return 0;
}