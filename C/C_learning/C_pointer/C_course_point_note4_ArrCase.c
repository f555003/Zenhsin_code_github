/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 17:22:43
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 17:28:32
 */
#include<stdio.h>

int main()
{
    // �w�q�@�ӫ��w�ƲաA�ӼƲժ��C�Ӥ����A���V���O�@�Ӧr��
    char *books[] ={"�T��t�q","��C��","���ӹ�","���q��"};
    
    int i,len=4;
    for ( i = 0; i < len; i++)
    {
        printf("books[%d] ���V���r�ꬰ = %s\n",i ,books[i]);
    }
    
    return 0;
}