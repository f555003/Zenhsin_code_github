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
    // *ptr = 555;//透過 *ptr 獲取point(目前程式指向 num 位置)的值修改為 555
    // printf("num\'s new value = %d\tnum/'s point = %p\n",num,&num);
    int a = 100;
    int b = 200;
    int * ptr = &a;
    //原始值
    printf("a = %d\t%p\t \n", a, &a);
    printf("b = %d\t%p\n", b, &b);
    printf("ptr = %p\t%p\t%d\n",ptr, &ptr, *ptr);
    printf("\n");
    //修改後、
    *ptr = 99;
    printf("修改*ptr = %d\n",*ptr);
    printf("a = %d\t%p\t \n", a, &a);
    printf("\n");

    ptr = &b;
    *ptr = 66;
    printf("ptr = &b -> %d\n",*ptr);
    printf("修改*ptr = %d\n",*ptr);
    printf("b = %d\t%p\n", b, &b);
    printf("ptr = %p\t%p\t%d\n",ptr, &ptr, *ptr);
    printf("\n");
    

    
    getchar();
    return 0;
}
