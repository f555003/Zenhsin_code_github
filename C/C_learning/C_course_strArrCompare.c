/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-22 14:52:56
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-22 15:09:29
 */
#include<stdio.h>
#include<string.h>

int main()
{
    /*
        
        char a[8];// a 在此為一個常量(不能修改)。
        
        a ="hello";//錯誤 相當於 str 指向一個空間
        
        a[0]='i';// 正確 在於那個空間 給值
        
    */
    char *b ="yes"; // 有指針 b 指向 yes
    printf("b 原本地址 %p\tb 指向地址 %p\n",&b,b);
    b="hello";  // 將 b 改為其他地址
    printf("b 原本地址 %p\tb 指向地址 %p\n",&b,b);
    printf("b = %s",b);

    return 0 ;
}