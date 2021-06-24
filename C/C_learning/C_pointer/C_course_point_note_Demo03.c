/*
 * @Descripttion: how to use pointer to contrl array in +/-
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 15:26:10
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 15:40:21
 */
#include <stdio.h>

const int MAX = 3; //常量

int main()
{
    int var[] = {10, 100, 300}; //int 數組
    int i, *ptr;                //ptr 是一個 int * 的指針
    ptr = var;                  //ptr 指向了 var 數組的首地址
    ptr += 2;                   //ptr 存儲的地址 + 2 個 int 的字節
                                //(一個 int 類型有 4 個字節)
    
    printf("var[2] = %d\tvar[2]的地址 = %p\n",var[2], &var[2]);
    printf("ptr = %p\tptr指向的地址內容 = %d\n", ptr, *ptr);
    
    return 0;
}