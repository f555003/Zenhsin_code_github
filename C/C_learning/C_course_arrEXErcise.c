/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-22 13:52:30
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-22 14:09:04
 */
/*
    1.�Ыؤ@�� char ������ 26 �Ӥ����� �ƲաA���O��m 'A'-'Z'
    Hint 'A'+1 -> 'B'
    2.�Ʋդ�j�p
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

    // // 2.�Ʋդ�j�p
    int arr[]={0,-1,99,89,100,101,-2};
    // printf("�j�p�� %d",sizeof(arr));
    int arrLen = sizeof(arr)/sizeof(int); 
    //sizeof �i�D�o �ܼƪ�����(int 4 bytes)�Τj�p(���׬�7) �ҥH printf �� 28
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