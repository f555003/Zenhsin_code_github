/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-22 16:20:30
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-22 16:31:59
 */

#include<stdio.h>

/*
    BinarySearch
*/
int BinarySearch(int arr[], int leftIndex, int rightIndex, int findVal)
{

    int midIndex = (leftIndex +rightIndex)/2;
    int midVal =arr[midIndex];

    //�Ʋճ�����L�F
    if (leftIndex > rightIndex)
    {
        return -1;
    }
    
    // �V����
    if (midVal > findVal)
    {
        BinarySearch(arr, leftIndex,  midIndex-1,  findVal);
    }
    // �V�k��
    else if(midVal < findVal)
    {
        BinarySearch(arr, midIndex+1,  rightIndex,  findVal);
    }
    else
    {
        return midIndex;
    }
}

int main()
{
    int arr[]={1,8,10,12,50,66,78,123};
    int arrLen = sizeof(arr)/sizeof(int);
    int index = BinarySearch(arr, 0, arrLen-1,78);
    if (index != -1)
    {
        printf("��� index = %d\n",index);
    }
    else
    {
        printf("�S����� index\n");
    }
    
    return 0 ;
}