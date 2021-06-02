/*
 * @Descripttion: This setion is talking about loop and how does it change.
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-01 12:22:18
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-02 22:47:07
 */
#include<stdio.h>
#include<string.h>
int main()
{
    // // for loop 1
    // int i;
    // for(i = 0; i <= 3 ;i++)
    // {
    //     printf("你好\n");
    // }
    // // for loop 2
    
    // for(int j = 0; j <= 3 ;j++)
    // {
    //     printf("XDD\n");
    // }
    // // for loop 3
    // int k = 0;
    // for(;k <= 3;)
    // {
    //     printf("UAU\n");
    //     k++;
    // }
    // // 以上三種為 for loop 變化型
    // // 進階 雙變數 for loop
    // int a;
    // int b;
    // for ( a = 0, b = 1; a < 3, b < 4; a++, b++ )
    // {
    //     printf("a = %d\nb = %d\n",a,b);
    // }
    // // while loop
    // int l = 0;
    // while(l < 2)
    // {
    //     printf("i = %d\n",l);
    //     l++;
    // }

    // char name[10] ="";
    // // strcmp(name,"exit") != 0 兩種寫法
    // // while ( strcmp(name,"exit") != 0)
    // while ( strcmp(name,"exit"))
    
    // {
    //     /* code */
    //     printf("請輸入姓名:");
    //     scanf("%s",name);
    //     printf("您輸入的是: %s\n",name);
    // }
    
    // printf("您已輸入 %s ，請按 Enter 離開\n",name);
    // getchar();
    // getchar();
    
    // 邏輯判別
    int i = 0;
    int j = 1;
    int k = 0;
    printf("i = %d\tj = %d\tk = %d\n",i,j,k);
    printf("i == j -->%d\n",i==j);
    printf("i != j -->%d\n",i!=j);
    printf("i != k -->%d\n",i!=k);
    // 問題 strcmp VS strncmp -->多了 [ n ]
    // strcmp(string1,string2)比較兩個string,
    // strncmp(string1,string2,n)則只比較前n個字元
    // 若是string1 若是string1=string2則傳回值=0,
    // 若是string1>string2則傳回值>0,

    
    return 0;
}