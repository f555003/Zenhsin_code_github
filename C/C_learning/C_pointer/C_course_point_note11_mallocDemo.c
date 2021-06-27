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
    void check(int*);//聲明函數
    int *p,i;//宣告一個 *p 及 i
    p = (int *)malloc(5*sizeof(int));
    /*
        malloc(5*sizeof(int)); --> 為 void *
        所以加入 (int *) 轉換
        C99 版本以上不需要此指令，電腦會直接幫你轉換
        C99 以下需加入 (int *)malloc(5*sizeof(int)); 轉換
        VS 2012 沒有 C99 版本故加入 (int *)malloc(5*sizeof(int)); 轉換
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
    printf("不及格的成績 有:");
    for ( i = 0; i < 5; i++)
    {
        if (p[i]<60)
        {
            printf("%d\n",p[i]);
        }
        
    }
    
}