/*
 * @Descripttion: how to use pointer compare
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 15:49:34
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 16:04:10
 */
#include<stdio.h>

int main()
{
    int var[]={10,100,200};
    int *ptr;
    ptr = var; // ptr 指向 var 首地址(第一個元素)
    /*
    // 這個會顯示錯誤，因為類型不一樣
    // ptr 為 int *
    // var[0] 為 int 
    // 故無法比較
    if (ptr == var[0])
    {
        printf("OK");
    }
    */
    if (ptr == &var[0])
    {
        printf("ptr == &var[0] is OK\n");
    }
    if (ptr == var)
    {
        printf("ptr == var is OK\n");
    }
    if (ptr >= &var[1])
    {
        printf("ptr >= &var[1] is OK 反回 True\n");
    }
    else
    {
        printf("ptr >= &var[1] is OK 反回 False\n");
    }
    
    

    return 0;
}