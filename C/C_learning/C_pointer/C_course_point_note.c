/*
 * @Descripttion:
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-05-23 15:52:23
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-24 22:10:46
 */
#include <stdio.h>
//int *p; 同等於 int* p;


int main()
{
    // basic point
    int num = 1;
    int *ptr = &num;
    // num 的 point 為多少
    //說明1: 如果要輸出一個變數的指標 使用格式為 %p
    //說明2: &num 表示為取出 num 這個變數對應的指標(point)
    printf("num 的值為 = %d\tnum 的 point = %p\n", num, &num);
    //說明
    //int* 表示 type 為 point type
    // 名稱 ptr , ptr 就是個 int * 類型
    // ptr 指向了一個 int 類型的變量(目前程式的變量是 num ) 對應的地址
    

    // 指針變量，本身也有地址
    printf("ptr 的值為 = %p\tptr 的 point = %p\n", ptr, &ptr);
    //每次運行的內存地址不會一樣，但是 指針指向的位置一定一樣。
    // 變量         值                      內存地址(指標)
    // num          1                   000000000061FE1C
    // *ptr         000000000061FE1C    000000000061FE10
    //輸出格式使用方法
    //例如:
    //printf("num 的值為 = %d", num);
    //printf("num 的 point = %p", &num);
    //輸出格式
    // printf    值                      指標                   獲取指針位址的值
    // num       %d(不是內存地址),num      %p(num內存地址),&num
    // *ptr      %p(存的是指標,用%p),ptr   %p(*ptr內存地址),&ptr  %d(取num的值),*ptr
    printf("ptr 為 %d",*ptr);
    getchar();
    return 0;
}