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

char *strlong(char *str1, char *str2)//��ƤϬ��� char *(���w)
{
    printf("str1 �����׬� %d\tstr2 �����׬� %d\n",strlen(str1),strlen(str2));
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
    // str �O�@�ӫ��w�����A���V�@�ӫ��w
    printf("�п�J�Ĥ@�Ӧr��");
    gets(str1);
    printf("�п�J�ĤG�Ӧr��");
    gets(str2);
    printf("\n");
    str = strlong(str1, str2);
    printf("Longer string: %s\n",str);
    return 0;
}