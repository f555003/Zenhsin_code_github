/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-22 14:52:56
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-22 15:09:29
 */
#include<stdio.h>
#include<string.h>

int main()
{
    /*
        
        char a[8];// a �b�����@�ӱ`�q(����ק�)�C
        
        a ="hello";//���~ �۷�� str ���V�@�ӪŶ�
        
        a[0]='i';// ���T �b�󨺭ӪŶ� ����
        
    */
    char *b ="yes"; // �����w b ���V yes
    printf("b �쥻�a�} %p\tb ���V�a�} %p\n",&b,b);
    b="hello";  // �N b �אּ��L�a�}
    printf("b �쥻�a�} %p\tb ���V�a�} %p\n",&b,b);
    printf("b = %s",b);

    return 0 ;
}