/*
 * @Descripttion: how to use pointer to contrl array in --
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 15:13:40
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 15:30:29
 */
#include <stdio.h>

const int MAX = 3; //�`�q

int main()
{
    int var[] = {10, 100, 300}; //int �Ʋ�
    int i, *ptr;                //ptr �O�@�� int * �����w
                                //ptr = var; //ptr ���V�F var �Ʋժ����a�}
    ptr = &var[MAX - 1];        //ptr ���V�F var �Ʋժ��̫�@�Ӥ���
    for (i = MAX; i > 0; i--)
    {
        printf("ptr �s�񪺦a�} = %p, var[%d]�a�} = %p\t", ptr, i - 1, &var[i - 1]);
        printf("�x�s��: var[%d] = %d\n", i - 1, *ptr);
        ptr--; //���I ptr-- --> ptr �s��a�}�| -4 �Ӧr�`(int ����)
    }

    return 0;
}