/*
 * @Descripttion: how to use pointer to contrl array in ++
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 14:55:34
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 15:29:58
 */
#include <stdio.h>

const int MAX = 3; //�`�q

int main()
{
    int var[] = {10, 100, 300}; //int �Ʋ�
    int i, *ptr;                //ptr �O�@�� int * �����w
    ptr = var;                  //ptr ���V�F var �Ʋժ����a�}
    for (i = 0; i < MAX; i++)
    {
        printf("var[%d]�a�} = %p\t", i, ptr);
        printf("�x�s��: var[%d] = %d\n", i, *ptr);
        ptr++; //���I ptr++ --> ptr �s��a�}�| +4 �Ӧr�`(int ����)
    }

    return 0;
}