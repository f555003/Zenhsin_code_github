/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 10:44:33
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 11:01:27
 */
#include <stdio.h>

int *func()
{
    // int n = 100;// n -> �����ܶq -> �s��� stack �ϥ� *func() ��|�P��
    static int n = 100; // n -> static �����ܶq -> �s��� �R�A�x�s�� �ϥΫ� *func() ���|�P��
    return &n;
}

int main()
{
    int *p = func(); // fun ��^���w
    int n;
    n = *p;
    printf("value = %d\n", n); // ���@�w���X 100
    return 0;
}