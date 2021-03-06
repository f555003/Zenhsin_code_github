/*
 * @Descripttion: how to use pointer to contrl array in --
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 15:13:40
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 15:30:29
 */
#include <stdio.h>

const int MAX = 3; //常量

int main()
{
    int var[] = {10, 100, 300}; //int 數組
    int i, *ptr;                //ptr 是一個 int * 的指針
                                //ptr = var; //ptr 指向了 var 數組的首地址
    ptr = &var[MAX - 1];        //ptr 指向了 var 數組的最後一個元素
    for (i = MAX; i > 0; i--)
    {
        printf("ptr 存放的地址 = %p, var[%d]地址 = %p\t", ptr, i - 1, &var[i - 1]);
        printf("儲存值: var[%d] = %d\n", i - 1, *ptr);
        ptr--; //重點 ptr-- --> ptr 存放地址會 -4 個字節(int 類型)
    }

    return 0;
}