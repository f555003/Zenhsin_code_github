/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 17:22:43
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 17:28:32
 */
#include<stdio.h>

int main()
{
    // 定義一個指針數組，該數組的每個元素，指向的是一個字串
    char *books[] ={"三國演義","西遊戲","紅樓夢","水滸傳"};
    
    int i,len=4;
    for ( i = 0; i < len; i++)
    {
        printf("books[%d] 指向的字串為 = %s\n",i ,books[i]);
    }
    
    return 0;
}