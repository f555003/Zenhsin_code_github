/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-05-28 13:39:53
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-05-28 14:22:25
 */
#include <stdio.h>

int main()
{
    //Bitwise operato
    //�Ω� �G�i��B��A���P�[��k�t�׬ۦP�A���֩󭼰��k
    //�]�A�Ω�洫�ܼ�����
    //��:������ܼ� a, b �A�Y�Q�� a, b �ܼƥ洫 �i�H�ϥ� XOR

    int a = 3;
    int b = 4;
    printf("��l a = %d\tb = %d\n\n",a,b);
    printf("�� 1 �����a ^ b = %d\n",a ^ b);
    //����1.
    // a = 3;
    // a ���G�i�쬰 0011;
    // b = 4;
    // b ���G�i�쬰 0100;
    a=a ^ b;
    // XOR(���_�ƭ� 1 �� 1�A��l�� 0) ��
    // a =a ^ b
    // 0100
    // a= 7
    printf(" a = a ^ b\n a = %d\tb = %d\n\n",a,b);
    printf("�� 2 �����a ^ b = %d\n",a ^ b);
    //����2.
    // a = 7;
    // a ���G�i�쬰 0111;
    // a = 4;
    // b ���G�i�쬰 0100;
    b=a ^ b;
    // XOR(���_�ƭ� 1 �� 1�A��l�� 0) ��
    // b = a ^ b;
    // 0011
    // a = 7
    // b = 3
    printf(" b = a ^ b\n a = %d\tb = %d\n\n",a,b);
    printf("�� 3 �����a ^ b = %d\n",a ^ b);
    //����2.
    // a = 7
    // a ���G�i�쬰 0111
    // a = 3
    // b ���G�i�쬰 0011
    a = a ^ b;
    // XOR(���_�ƭ� 1 �� 1�A��l�� 0) ��
    // a = a ^ b
    // 0100
    // a = 4
    // b = 3
    printf(" a = a ^ b\n a = %d\tb = %d\n",a,b);
    getchar();
    return 0;
}