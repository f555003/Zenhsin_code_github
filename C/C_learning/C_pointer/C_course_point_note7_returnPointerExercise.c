/*
 * @Descripttion: �s�g�@�Ө�ơA��^�@�Ӥ@���Ʋ� 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 11:02:27
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 11:11:38
 */
#include<stdio.h>
#include<stdlib.h>

int *f1()
{
    static int arr[10];
    //�����[�W�@�� static, �� arr ���Ŷ��b�R�A�ƾ��x�s�Ϥ��t
    int i =0;
    for ( i = 0; i < 10; i++)
    {
        arr[i] = rand();
    }
    return arr;

}

int main()
{
    int *p;
    int i;
    p =f1();
    // p ���V�O�b f1 �ͦ����Ʋժ����a�}(�Y�Ĥ@�Ӥ������a�})
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",*(p+i));
    }
    
    return 0;
}