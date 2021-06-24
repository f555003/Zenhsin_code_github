/*
 * @Descripttion: how to use pointer to contrl array in --
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 15:13:40
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 15:30:29
 */
#include <stdio.h>

const int MAX = 3; //盽秖

int main()
{
    int var[] = {10, 100, 300}; //int 计舱
    int i, *ptr;                //ptr 琌 int * 皐
                                //ptr = var; //ptr  var 计舱
    ptr = &var[MAX - 1];        //ptr  var 计舱程じ
    for (i = MAX; i > 0; i--)
    {
        printf("ptr  = %p, var[%d] = %p\t", ptr, i - 1, &var[i - 1]);
        printf("纗: var[%d] = %d\n", i - 1, *ptr);
        ptr--; //翴 ptr-- --> ptr 穦 -4 竊(int 摸)
    }

    return 0;
}