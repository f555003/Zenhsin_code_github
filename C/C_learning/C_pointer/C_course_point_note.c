/*
 * @Descripttion:
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-05-23 15:52:23
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 22:10:46
 */
#include <stdio.h>
//int *p; �P���� int* p;


int main()
{
    // basic point
    int num = 1;
    int *ptr = &num;
    // num �� point ���h��
    //����1: �p�G�n��X�@���ܼƪ����� �ϥή榡�� %p
    //����2: &num ��ܬ����X num �o���ܼƹ���������(point)
    printf("num ���Ȭ� = %d\tnum �� point = %p\n", num, &num);
    //����
    //int* ��� type �� point type
    // �W�� ptr , ptr �N�O�� int * ����
    // ptr ���V�F�@�� int �������ܶq(�ثe�{�����ܶq�O num ) �������a�}
    

    // ���w�ܶq�A�����]���a�}
    printf("ptr ���Ȭ� = %p\tptr �� point = %p\n", ptr, &ptr);
    //�C���B�檺���s�a�}���|�@�ˡA���O ���w���V����m�@�w�@�ˡC
    // �ܶq         ��                      ���s�a�}(����)
    // num          1                   000000000061FE1C
    // *ptr         000000000061FE1C    000000000061FE10
    //��X�榡�ϥΤ�k
    //�Ҧp:
    //printf("num ���Ȭ� = %d", num);
    //printf("num �� point = %p", &num);
    //��X�榡
    // printf    ��                      ����                   ������w��}����
    // num       %d(���O���s�a�}),num      %p(num���s�a�}),&num
    // *ptr      %p(�s���O����,��%p),ptr   %p(*ptr���s�a�}),&ptr  %d(��num����),*ptr
    printf("ptr �� %d",*ptr);
    getchar();
    return 0;
}