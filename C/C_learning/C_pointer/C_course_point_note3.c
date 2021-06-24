/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-05-27 11:11:11
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-05-27 11:14:13
 */

#include<stdio.h>

int main()
{
    int num =100;
    int *p = &num;
    int *p2 = p;
    *p2 =50;
    printf("num = %d",num);
    getchar();
    return 0;
}