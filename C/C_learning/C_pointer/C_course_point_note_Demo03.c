/*
 * @Descripttion: how to use pointer to contrl array in +/-
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 15:26:10
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 15:40:21
 */
#include <stdio.h>

const int MAX = 3; //�`�q

int main()
{
    int var[] = {10, 100, 300}; //int �Ʋ�
    int i, *ptr;                //ptr �O�@�� int * �����w
    ptr = var;                  //ptr ���V�F var �Ʋժ����a�}
    ptr += 2;                   //ptr �s�x���a�} + 2 �� int ���r�`
                                //(�@�� int ������ 4 �Ӧr�`)
    
    printf("var[2] = %d\tvar[2]���a�} = %p\n",var[2], &var[2]);
    printf("ptr = %p\tptr���V���a�}���e = %d\n", ptr, *ptr);
    
    return 0;
}