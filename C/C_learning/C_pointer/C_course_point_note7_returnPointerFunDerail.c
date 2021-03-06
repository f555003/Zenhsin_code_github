/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 10:44:33
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 11:01:27
 */
#include <stdio.h>

int *func()
{
    // int n = 100;// n -> 局部變量 -> 存放於 stack 使用 *func() 後會銷毀
    static int n = 100; // n -> static 局部變量 -> 存放於 靜態儲存區 使用後 *func() 不會銷毀
    return &n;
}

int main()
{
    int *p = func(); // fun 返回指針
    int n;
    n = *p;
    printf("value = %d\n", n); // 不一定能輸出 100
    return 0;
}