/*
 * @Descripttion: how to send array of point to function
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 19:53:00
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-25 14:31:35
 */
#include <stdio.h>

/*函數宣告*/
double getAverage(int *arr, int size);
double getAverage2(int *arr, int size);

int main()
{
    int arr000[5] = {1000, 2, 3, 17, 50};
    double avg = 0.0;
    /*傳遞一個指向陣列的指針作為參數*/
    avg = getAverage(arr000,5);
    // avg = getAverage2(arr000, 5);
    
    //說明 avg = getAverage2(arr,5);
    /*
    內存
    |-----------------------------------------------------|
    |stack                                                |
    |   |-------------------------------------------|     |
    |   |getAverage2                                |     |
    |   |     arr ----->[0x1122] 0X1133 <-----------|--   |
    |   |可透過 arr++ 或是 arr[i] 更改下標來獲取下一個數值| |   |
    |   | arr++ 會對 arr 存放的地址做修改               | |   |
    |   |原本 arr ----->[0x1122]                     | |   |
    |   |目前 arr 類型為 int 經過 arr++ 下一次會+4個字節 | |   |
    |   |    arr ----->[0x1126] 0X1133              | |   |
    |   |    在 stack 中 arr 的地址 0X1133 不會修改    | |   |
    |   |                                           | |   |
    |   | arr[i] [不]會對 arr 存放的地址做修改          | |   |
    |   | arr[0] 可看為 arr + 0 個字節                | |   |
    |   | arr[1] 可看為 arr + 1 個字節(此題目是int)    | |   |
    |   | arr[2] 可看為 arr + 2 個字節(此題目是int)    | |   |
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
//說明
/*
    1. arr 是一個指針
*/
double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg = 0.0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i]; //arr[0] ->取陣列第一個元素的地址
        printf("getAverage arr存放地址 = %p\tarr 本身的地址 = %p\n", arr, &arr);
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
        printf("getAverage2 arr存放地址 = %p\tarr 本身的地址 = %p\n", arr, &arr);
        arr++; ////重點 arr++ --> arr 存放地址會 +4 個字節(int 類型)
               //arr++ 會對 arr 存放的地址做修改
    }
    avg = (double)sum / size;
    return avg;
}