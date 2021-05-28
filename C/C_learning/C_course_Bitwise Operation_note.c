/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-05-28 13:39:53
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-05-28 14:22:25
 */
#include <stdio.h>

int main()
{
    //Bitwise operato
    //用於 二進位運算，雖與加減法速度相同，但快於乘除法
    //也適用於交換變數應用
    //例:有兩個變數 a, b ，若想把 a, b 變數交換 可以使用 XOR

    int a = 3;
    int b = 4;
    printf("原始 a = %d\tb = %d\n\n",a,b);
    printf("第 1 次更替a ^ b = %d\n",a ^ b);
    //說明1.
    // a = 3;
    // a 的二進位為 0011;
    // b = 4;
    // b 的二進位為 0100;
    a=a ^ b;
    // XOR(有奇數個 1 為 1，其餘為 0) 為
    // a =a ^ b
    // 0100
    // a= 7
    printf(" a = a ^ b\n a = %d\tb = %d\n\n",a,b);
    printf("第 2 次更替a ^ b = %d\n",a ^ b);
    //說明2.
    // a = 7;
    // a 的二進位為 0111;
    // a = 4;
    // b 的二進位為 0100;
    b=a ^ b;
    // XOR(有奇數個 1 為 1，其餘為 0) 為
    // b = a ^ b;
    // 0011
    // a = 7
    // b = 3
    printf(" b = a ^ b\n a = %d\tb = %d\n\n",a,b);
    printf("第 3 次更替a ^ b = %d\n",a ^ b);
    //說明2.
    // a = 7
    // a 的二進位為 0111
    // a = 3
    // b 的二進位為 0011
    a = a ^ b;
    // XOR(有奇數個 1 為 1，其餘為 0) 為
    // a = a ^ b
    // 0100
    // a = 4
    // b = 3
    printf(" a = a ^ b\n a = %d\tb = %d\n",a,b);
    getchar();
    return 0;
}