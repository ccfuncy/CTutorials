//
// Created by ccfuncy on 2024-04-01.
//
#include <stdio.h>
#include <stdarg.h>

void HandleVarargs(int args_count,...){
    //1. 定义变长参数列表
    va_list  args;
    //2. 开始遍历
    va_start(args,args_count);
    for (int i = 0; i < args_count; ++i) {
        //3. 取出对应的参数 （var_list,type）
        int arg = va_arg(args,int);
        printf("%d:%d\n",i,arg);
    }
    //4.结束遍历
    va_end(args);
}

int main(){
    HandleVarargs(4,1,2,3,4);
}
