/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 16:29:19
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 17:15:01
 */
#include<stdio.h>
const int MAX = 3;
int main()
{
    int var[]={10,100,1000}
    int i;
    int *ptr[3]; // �������I�A��ܻ� ptr �Ы� 3 �ӫ��w�}�C
    /*
    �|�� 1.
    ��l �ܼ� var �� ptr ��Ƭ��H�U��ܤ覡
        �ܼ�    ���s1       ���s2       ���s3
                0x1133     0x1137     0x113B
                �ƾ�1       �ƾ�2      �ƾ�3
        var     10         100        1000
    -------------------------------------------
        �ܼ�    ���s1       ���s2       ���s3
                0x1122     0x1126     0x112A
                �ƾ�1       �ƾ�2       �ƾ�3
        ptr     �a�}1       �a�}2       �a�}3
    */

    for ( i = 0; i < MAX; i++)
    {
        ptr[i]=&var[i];/*��Ȭ���ƪ��a�}*/
    }
    
    /*
    �g�L for loop �A�o��ݪ`�N ptr ���ƾڷ|���V var �����s��m
        �ܼ�    ���s1       ���s2       ���s3
                0x1133     0x1137     0x113B
                �ƾ�1       �ƾ�2      �ƾ�3
        var     10         100        1000
    -------------------------------------------
        �ܼ�    ���s1       ���s2       ���s3
                0x1122     0x1126     0x112A
                �ƾ�1       �ƾ�2       �ƾ�3
        ptr     0x1133     0x1137     0x113B
    */
    // ptr be called array of point.

    for ( i = 0; i < MAX; i++)/*���w�}�C������U�ӭ�*/
    {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
    
    return 0;
}