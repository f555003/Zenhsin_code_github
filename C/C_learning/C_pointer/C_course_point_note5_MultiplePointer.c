/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-24 17:44:14
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 19:14:00
 */



/*
    // 說明
    // 第一個指針包含了第二個指針的地址，
    // 第二個指針指向包含實際數據值的位置
            pointer1      pointer2      Variable
    內存     address1 ---> address2 ---> Value
            二級指針   <--- 一級指針  <--- 數據值
取數據方式      **             *
*/
#include<stdio.h>
// 一個 指針 --指向--> 指針變量時 宣告變量名前要放置 2 個 **
// int **ptr; // ptr 的類型為 int **



/*
    經過 for loop ，這邊需注意 ptr 的數據會指向 var 的內存位置
        變數    內存地址1    內存地址2   內存地址3
                0x1133     0x1137     0x113B
                數據1       數據2      數據3
        var     10         100        1000
    -------------------------------------------
        變數    內存地址1    內存地址2   內存地址3
                0x1144     0x1148     0x114c
                數據1       數據2       數據3
        ptr     0x1133     0x1137     0x113B
    -------------------------------------------
        變數    內存地址1    內存地址2   內存地址3
                0x1155     0x1159     0x115D
                數據1       數據2       數據3
        pptr    0x1144     0x1148     0x114c
*/

int main()
{
    int var = 300;
    int *ptr; // 一級指針
    int **pptr; // 二級指針
    
    ptr = &var; // var 變量的地址賦給 ptr
    pptr = &ptr; // 表示 ptr 存放的地址 賦給 pptr
    
    printf("var's address = %p var = %d\n",&var,var);
    printf("ptr's address = %p ptr store address = %p ptr = %d\n",&ptr,ptr,*ptr);
    printf("pptr's address = %p pptr store address = %p pptr = %d\n",&pptr,pptr,**pptr);
    return 0;
}