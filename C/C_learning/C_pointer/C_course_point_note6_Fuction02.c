/*
 * @Descripttion: how to send array of point to function
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 19:53:00
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-25 14:31:35
 */
#include <stdio.h>

/*��ƫŧi*/
double getAverage(int *arr, int size);
double getAverage2(int *arr, int size);

int main()
{
    int arr000[5] = {1000, 2, 3, 17, 50};
    double avg = 0.0;
    /*�ǻ��@�ӫ��V�}�C�����w�@���Ѽ�*/
    avg = getAverage(arr000,5);
    // avg = getAverage2(arr000, 5);
    
    //���� avg = getAverage2(arr,5);
    /*
    ���s
    |-----------------------------------------------------|
    |stack                                                |
    |   |-------------------------------------------|     |
    |   |getAverage2                                |     |
    |   |     arr ----->[0x1122] 0X1133 <-----------|--   |
    |   |�i�z�L arr++ �άO arr[i] ���U�Ш�����U�@�Ӽƭ�| |   |
    |   | arr++ �|�� arr �s�񪺦a�}���ק�               | |   |
    |   |�쥻 arr ----->[0x1122]                     | |   |
    |   |�ثe arr ������ int �g�L arr++ �U�@���|+4�Ӧr�` | |   |
    |   |    arr ----->[0x1126] 0X1133              | |   |
    |   |    �b stack �� arr ���a�} 0X1133 ���|�ק�    | |   |
    |   |                                           | |   |
    |   | arr[i] [��]�|�� arr �s�񪺦a�}���ק�          | |   |
    |   | arr[0] �i�ݬ� arr + 0 �Ӧr�`                | |   |
    |   | arr[1] �i�ݬ� arr + 1 �Ӧr�`(���D�جOint)    | |   |
    |   | arr[2] �i�ݬ� arr + 2 �Ӧr�`(���D�جOint)    | |   |
    |   |-------------------------------------------| |   |
    |                                                 |   |
    |                                                 |   |
    |                                                 |   |
    |                                                 |   |
    |   |------------------------------------------|  |   |
    |   |main                                      |  |   |
    |   |    arr000 ---->[1000[0x1122],2,3,17,50]  |  |   |
    |   |    avg = getAverage2(arr000,5); ---------|--|   |
    |   |------------------------------------------|      |
    |-----------------------------------------------------|
*/
    printf("Average value is: %f\n", avg);
    return 0;
}
//����
/*
    1. arr �O�@�ӫ��w
*/
double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg = 0.0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i]; //arr[0] ->���}�C�Ĥ@�Ӥ������a�}
        printf("getAverage arr�s��a�} = %p\tarr �������a�} = %p\n", arr, &arr);
    }
    avg = (double)sum / size;
    return avg;
}

double getAverage2(int *arr, int size)
{
    int i, sum = 0;
    double avg = 0.0;
    for (i = 0; i < size; i++)
    {
        sum += *arr;
        printf("getAverage2 arr�s��a�} = %p\tarr �������a�} = %p\n", arr, &arr);
        arr++; ////���I arr++ --> arr �s��a�}�| +4 �Ӧr�`(int ����)
               //arr++ �|�� arr �s�񪺦a�}���ק�
    }
    avg = (double)sum / size;
    return avg;
}