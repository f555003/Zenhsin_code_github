/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 11:56:24
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 13:58:45
 */
#include<stdio.h>
#include<stdlib.h>

/*
    �^�����
    1.int(*f)(void)
    2. f �N�O��ƫ��w�A�L�i�H������ƪ��O (��^�Oint,�S���ΰѪ����)
    3. f �b initArray �o�̳Q�եΡA�R��F�^�ը�ƨ���
*/


void initArray(int *array, int arraySize, int(*f)(void))
{
    int i;
    for ( i = 0; i < arraySize; i++)
    {
        array[i]=(*f)();
        //�q�L��ƫ��w�A�եΤF getNextRandomValue
        // (*f)() ������ f()
    }
    
}

int getNextRandomValue(void)
{
    return rand();
}


int main()
{
    int myarray[10],i;//�w�q�@�ӼƲթM int
    /*
        ����
        1.�I�s initArray ���
        2.�ǤJ�@�Ө�ƦW getNextRandomValue(�a�})�A�ݭn��ƫ��w����
    */
    initArray(myarray,10,getNextRandomValue);
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",myarray[i]);
    }
    
    return 0;
}