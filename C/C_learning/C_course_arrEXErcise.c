/*
 * @Descripttion:  how to use array in C
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-22 13:52:30
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-22 14:37:38
 */
/*
    1.�Ыؤ@�� char ������ 26 �Ӥ����� �ƲաA���O��m 'A'-'Z'
    Hint 'A'+1 -> 'B'
    2.�Ʋդ�j�p
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
        // �� 7 �Ӧ�m �s��'a','b','c' �b�� 4 �Ӧ�m�|���h�[�J \0 ��ܦr�굲���C
        
        // 2.
            char b[3]={'a','b','c'};
        // �� 3 �Ӧ�m �s��'a','b','c' �S���h�� 4 �Ӧ�m�s�� \0 �r�굲���C
        // ���i��|�ɭP��X�ýX�C

        // 3.
            char c[]="abc";
        // �����w�Ŷ��A�õ����ҥH���|�X�{�ýX�C
    */
    char greeting[]="Hello";
    int i;
    int len = strlen(greeting);
    printf("greeting = %s\n",greeting);
    printf("len = %d\n",len);
    printf("�r��ĤT�Ӧr�ŬO %c\n",greeting[2]);
    for ( i = 0; i < len; i++)
    {
        printf("%c\n",greeting[i]);
    }
    



    // // // 2.�Ʋդ�j�p
    // int arr[]={0,-1,99,89,100,101,-2};
    // // printf("�j�p�� %d\n",sizeof(arr));
    // int arrLen = sizeof(arr)/sizeof(int); 
    // //sizeof �i�D�o �ܼƪ�����(int 4 bytes)�Τj�p(���׬�7) �ҥH printf �� 28
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