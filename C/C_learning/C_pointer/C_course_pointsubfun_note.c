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
    printf("\tsubfun 中的 n 等於 %d\n",n);
}
/*
    基本數據類型默認為值傳遞，即進行值拷貝。
    在函數內修改 ( n++ ) ，不會影響到原來的值 ( main 中的 n )
*/
int f2point(int *n)
{
    (*n)++;
    printf("\tsubfun 中的 *n 等於 %d\n",*n);
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