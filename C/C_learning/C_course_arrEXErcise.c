/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-22 13:52:30
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-22 13:57:04
 */
/*
    �Ыؤ@�� char ������ 26 �Ӥ����� �ƲաA���O��m 'A'-'Z'
    Hint 'A'+1 -> 'B'
*/
#include<stdio.h>

int main()
{
    char arr[26];
    int i;
    for ( i = 0; i < 26; i++)
    {
        arr[i]='A'+i;
        printf("%d = %c\n",i+1,arr[i]);
    }
    return 0;
}