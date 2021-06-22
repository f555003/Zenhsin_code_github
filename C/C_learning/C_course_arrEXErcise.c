/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-22 13:52:30
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-22 14:09:04
 */
/*
    1.創建一個 char 類型的 26 個元素的 數組，分別放置 'A'-'Z'
    Hint 'A'+1 -> 'B'
    2.數組比大小
*/
#include<stdio.h>

int main()
{
    // char arr[26];
    // int i;
    // for ( i = 0; i < 26; i++)
    // {
    //     arr[i]='A'+i;
    //     printf("%d = %c\n",i+1,arr[i]);
    // }

    // // 2.數組比大小
    int arr[]={0,-1,99,89,100,101,-2};
    // printf("大小為 %d",sizeof(arr));
    int arrLen = sizeof(arr)/sizeof(int); 
    //sizeof 可求得 變數的類型(int 4 bytes)及大小(長度為7) 所以 printf 為 28
    int max = arr[0];
    int i;

    for ( i = 1; i < arrLen; i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    printf("max -> %d",max);

    return 0;
}