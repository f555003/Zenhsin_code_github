/*
 * @Descripttion:  how to use array in C
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-22 13:52:30
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-22 14:37:38
 */
/*
    1.創建一個 char 類型的 26 個元素的 數組，分別放置 'A'-'Z'
    Hint 'A'+1 -> 'B'
    2.數組比大小
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    // char arr[26];
    // int i;
    // for ( i = 0; i < 26; i++)
    // {
    //     arr[i]='A'+i;
    //     printf("%d = %c\n",i+1,arr[i]);
    // }


    /*

        // 1.
            char a[7]={'a','b','c'};
        // 有 7 個位置 存放'a','b','c' 在第 4 個位置會有多加入 \0 表示字串結束。
        
        // 2.
            char b[3]={'a','b','c'};
        // 有 3 個位置 存放'a','b','c' 沒有多第 4 個位置存放 \0 字串結束。
        // 有可能會導致輸出亂碼。

        // 3.
            char c[]="abc";
        // 有給定空間，並結束所以不會出現亂碼。
    */
    char greeting[]="Hello";
    int i;
    int len = strlen(greeting);
    printf("greeting = %s\n",greeting);
    printf("len = %d\n",len);
    printf("字串第三個字符是 %c\n",greeting[2]);
    for ( i = 0; i < len; i++)
    {
        printf("%c\n",greeting[i]);
    }
    



    // // // 2.數組比大小
    // int arr[]={0,-1,99,89,100,101,-2};
    // // printf("大小為 %d\n",sizeof(arr));
    // int arrLen = sizeof(arr)/sizeof(int); 
    // //sizeof 可求得 變數的類型(int 4 bytes)及大小(長度為7) 所以 printf 為 28
    // int max = arr[0];
    // int i;

    // for ( i = 1; i < arrLen; i++)
    // {
    //     if(arr[i] > max)
    //     {
    //         max=arr[i];
    //     }
    // }
    // printf("max -> %d\n",max);

    




    return 0;
}