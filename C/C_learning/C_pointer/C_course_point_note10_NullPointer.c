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
    int *p =NULL;//p �ū��w
    /*
        int *p =NULL;//p �ū��w -->�� 0 ���`�q
        �� int *p �u;
        �����l�ƮɡA
        �q�����w *p ��L�ƾ�
    */
    int num= 34;
    p =&num;
    printf("*p =%d\n",*p);
    return 0;
}