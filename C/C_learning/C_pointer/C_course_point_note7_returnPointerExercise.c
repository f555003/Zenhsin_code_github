/*
 * @Descripttion: 編寫一個函數，返回一個一維數組 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 11:02:27
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 11:11:38
 */
#include<stdio.h>
#include<stdlib.h>

int *f1()
{
    static int arr[10];
    //必須加上一個 static, 讓 arr 的空間在靜態數據儲存區分配
    int i =0;
    for ( i = 0; i < 10; i++)
    {
        arr[i] = rand();
    }
    return arr;

}

int main()
{
    int *p;
    int i;
    p =f1();
    // p 指向是在 f1 生成的數組的首地址(即第一個元素的地址)
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",*(p+i));
    }
    
    return 0;
}