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
    // int n = 100;// n -> Ы场跑秖 ->  stack ㄏノ *func() 穦綪反
    static int n = 100; // n -> static Ы场跑秖 ->  繰篈纗跋 ㄏノ *func() ぃ穦綪反
    return &n;
}

int main()
{
    int *p = func(); // fun 皐
    int n;
    n = *p;
    printf("value = %d\n", n); // ぃ﹚块 100
    return 0;
}