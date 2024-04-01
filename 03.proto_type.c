//
// Created by ccfuncy on 2024-04-01.
// 在C语言中，真正表示函数没有参数的写法为main(void)
// main() 这种写法表示接受任意参数
//
#include <stdio.h>

void EmptyParamList();

int main(void){
    EmptyParamList();
    EmptyParamList("12");

    EmptyParamList("",12);
    return 1;
}
void EmptyParamList(){
    puts("Hello");
}