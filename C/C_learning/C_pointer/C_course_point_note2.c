/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-05-23 17:38:50
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-05-23 20:48:38
 */

#include<stdio.h>

int main()
{
    // int num     = 666;
    // int *ptr    = &num;
    // printf("num\'s value = %d\tnum/'s point = %p\n",num,&num);
    // printf("ptr\'s value = %p\n",ptr);
    // *ptr = 555;//�z�L *ptr ���point(�ثe�{�����V num ��m)���ȭקאּ 555
    // printf("num\'s new value = %d\tnum/'s point = %p\n",num,&num);
    int a = 100;
    int b = 200;
    int * ptr = &a;
    //��l��
    printf("a = %d\t%p\t \n", a, &a);
    printf("b = %d\t%p\n", b, &b);
    printf("ptr = %p\t%p\t%d\n",ptr, &ptr, *ptr);
    printf("\n");
    //�ק��B
    *ptr = 99;
    printf("�ק�*ptr = %d\n",*ptr);
    printf("a = %d\t%p\t \n", a, &a);
    printf("\n");

    ptr = &b;
    *ptr = 66;
    printf("ptr = &b -> %d\n",*ptr);
    printf("�ק�*ptr = %d\n",*ptr);
    printf("b = %d\t%p\n", b, &b);
    printf("ptr = %p\t%p\t%d\n",ptr, &ptr, *ptr);
    printf("\n");
    

    
    getchar();
    return 0;
}
