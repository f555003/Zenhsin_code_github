/*
 * @Descripttion: Show how to use subfun with point type or not
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-09 14:35:21
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-11 14:16:46
 */
#include<stdio.h>
int f2(int n)
{
    n++;
    printf("\tsubfun ���� n ���� %d\n",n);
}
/*
    �򥻼ƾ������q�{���ȶǻ��A�Y�i��ȫ����C
    �b��Ƥ��ק� ( n++ ) �A���|�v�T���Ӫ��� ( main ���� n )
*/
int f2point(int *n)
{
    (*n)++;
    printf("\tsubfun ���� *n ���� %d\n",*n);
}

int main()
{
    // int n = 9;
    // printf("first, n of main fountion is %d\n",n);
    // f2(n);
    // printf("n of main fountion is %d\n",n);
    // f2point(&n);
    // int a =11;
    // int c = 4;

    // printf("n of main fountion is %d\n",a%c);

    int Buffer[]={0,1,2,11,4,5,3};
int I=0, temp=0;
for(I=0; I< 6; I++) {
if(Buffer[I]>10)
continue;
temp += Buffer[I];
}
printf("AAA The result is %d\n",temp);


    return 0;
}