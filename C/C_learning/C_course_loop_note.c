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
    //     printf("�A�n\n");
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
    // // �H�W�T�ج� for loop �ܤƫ�
    // // �i�� ���ܼ� for loop
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
    // // strcmp(name,"exit") != 0 ��ؼg�k
    // // while ( strcmp(name,"exit") != 0)
    // while ( strcmp(name,"exit"))
    
    // {
    //     /* code */
    //     printf("�п�J�m�W:");
    //     scanf("%s",name);
    //     printf("�z��J���O: %s\n",name);
    // }
    
    // printf("�z�w��J %s �A�Ы� Enter ���}\n",name);
    // getchar();
    // getchar();
    
    // �޿�P�O
    int i = 0;
    int j = 1;
    int k = 0;
    printf("i = %d\tj = %d\tk = %d\n",i,j,k);
    printf("i == j -->%d\n",i==j);
    printf("i != j -->%d\n",i!=j);
    printf("i != k -->%d\n",i!=k);
    // ���D strcmp VS strncmp -->�h�F [ n ]
    // strcmp(string1,string2)������string,
    // strncmp(string1,string2,n)�h�u����en�Ӧr��
    // �Y�Ostring1 �Y�Ostring1=string2�h�Ǧ^��=0,
    // �Y�Ostring1>string2�h�Ǧ^��>0,

    
    return 0;
}