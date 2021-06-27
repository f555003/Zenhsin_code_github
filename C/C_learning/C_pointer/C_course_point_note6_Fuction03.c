/*
 * @Descripttion: return Pointer function
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 21:19:35
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 10:40:19
 */
#include<stdio.h>
#include<string.h>

char *strlong(char *str1, char *str2)//函數反為的 char *(指針)
{
    printf("str1 的長度為 %d\tstr2 的長度為 %d\n",strlen(str1),strlen(str2));
    if (strlen(str1) >= strlen(str2))
    {
        return str1;
    }
    else
    {
        return str2;
    }
    
}

int main()
{
    char str1[30], str2[30], *str;
    // str 是一個指針類型，指向一個指針
    printf("請輸入第一個字串");
    gets(str1);
    printf("請輸入第二個字串");
    gets(str2);
    printf("\n");
    str = strlong(str1, str2);
    printf("Longer string: %s\n",str);
    return 0;
}