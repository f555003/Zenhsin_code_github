/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 14:02:41
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 14:06:23
 */
#include<stdio.h>

int main()
{
    int *p =NULL;//p 空指針
    /*
        int *p =NULL;//p 空指針 -->為 0 的常量
        較 int *p 優;
        防止為初始化時，
        電腦給定 *p 其他數據
    */
    int num= 34;
    p =&num;
    printf("*p =%d\n",*p);
    return 0;
}