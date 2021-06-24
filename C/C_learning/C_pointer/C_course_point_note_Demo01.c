/*
 * @Descripttion: how to use pointer to contrl array in ++
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 14:55:34
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 15:29:58
 */
#include <stdio.h>

const int MAX = 3; //常量

int main()
{
    int var[] = {10, 100, 300}; //int 數組
    int i, *ptr;                //ptr 是一個 int * 的指針
    ptr = var;                  //ptr 指向了 var 數組的首地址
    for (i = 0; i < MAX; i++)
    {
        printf("var[%d]地址 = %p\t", i, ptr);
        printf("儲存值: var[%d] = %d\n", i, *ptr);
        ptr++; //重點 ptr++ --> ptr 存放地址會 +4 個字節(int 類型)
    }

    return 0;
}