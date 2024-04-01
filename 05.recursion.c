//
// Created by ccfuncy on 2024-04-01.
//

#include <stdio.h>
unsigned  int Factorial(unsigned int n){
    if(n==1){
        return n; //f(0)=1
    } else{
        return n* Factorial(n-1);
    }
}

unsigned int Fibonacci(unsigned int n){
    if(n==0 || n==1){
        return  n;
    } else{
        return Fibonacci(n-1)+ Fibonacci(n-2);
    }
}

int main(void ){
    printf("3!=%d \n", Factorial(3));
    printf("5!=%d \n", Factorial(5));
    printf("10!=%d \n", Factorial(10));

    printf("Fibonacci(3)=%d \n", Fibonacci(3));
    printf("Fibonacci(5)=%d \n", Fibonacci(5));
    printf("Fibonacci(10)=%d \n", Fibonacci(10));
}