/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 16:29:19
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 17:15:01
 */
#include<stdio.h>
const int MAX = 3;
int main()
{
    int var[]={10,100,1000}
    int i;
    int *ptr[3]; // 此為重點，表示說 ptr 創建 3 個指針陣列
    /*
    舉例 1.
    原始 變數 var 及 ptr 資料為以下表示方式
        變數    內存1       內存2       內存3
                0x1133     0x1137     0x113B
                數據1       數據2      數據3
        var     10         100        1000
    -------------------------------------------
        變數    內存1       內存2       內存3
                0x1122     0x1126     0x112A
                數據1       數據2       數據3
        ptr     地址1       地址2       地址3
    */

    for ( i = 0; i < MAX; i++)
    {
        ptr[i]=&var[i];/*賦值為整數的地址*/
    }
    
    /*
    經過 for loop ，這邊需注意 ptr 的數據會指向 var 的內存位置
        變數    內存1       內存2       內存3
                0x1133     0x1137     0x113B
                數據1       數據2      數據3
        var     10         100        1000
    -------------------------------------------
        變數    內存1       內存2       內存3
                0x1122     0x1126     0x112A
                數據1       數據2       數據3
        ptr     0x1133     0x1137     0x113B
    */
    // ptr be called array of point.

    for ( i = 0; i < MAX; i++)/*指針陣列來獲取各個值*/
    {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
    
    return 0;
}