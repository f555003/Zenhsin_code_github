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

    //數組都比較過了
    if (leftIndex > rightIndex)
    {
        return -1;
    }
    
    // 向左找
    if (midVal > findVal)
    {
        BinarySearch(arr, leftIndex,  midIndex-1,  findVal);
    }
    // 向右找
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
        printf("找到 index = %d\n",index);
    }
    else
    {
        printf("沒有找到 index\n");
    }
    
    return 0 ;
}