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
    ptr = var; // ptr ���V var ���a�}(�Ĥ@�Ӥ���)
    /*
    // �o�ӷ|��ܿ��~�A�]���������@��
    // ptr �� int *
    // var[0] �� int 
    // �G�L�k���
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
        printf("ptr >= &var[1] is OK �Ϧ^ True\n");
    }
    else
    {
        printf("ptr >= &var[1] is OK �Ϧ^ False\n");
    }
    
    

    return 0;
}