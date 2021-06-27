/*
 * @Descripttion: how to use malloc
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 15:51:22
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 16:04:17
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    void check(int*);//�n�����
    int *p,i;//�ŧi�@�� *p �� i
    p = (int *)malloc(5*sizeof(int));
    /*
        malloc(5*sizeof(int)); --> �� void *
        �ҥH�[�J (int *) �ഫ
        C99 �����H�W���ݭn�����O�A�q���|�������A�ഫ
        C99 �H�U�ݥ[�J (int *)malloc(5*sizeof(int)); �ഫ
        VS 2012 �S�� C99 �����G�[�J (int *)malloc(5*sizeof(int)); �ഫ
    */
    for ( i = 0; i < 5; i++)
    {
        scanf("%d*c",p+i);
    }
    check(p);
    free(p);
    return 0;
}

void check(int *p)
{
    int i;
    printf("���ή檺���Z ��:");
    for ( i = 0; i < 5; i++)
    {
        if (p[i]<60)
        {
            printf("%d\n",p[i]);
        }
        
    }
    
}