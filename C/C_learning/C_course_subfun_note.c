/*
 * @Descripttion: use General recursive function to finish Successione di Fibonacci
 *                e.q. -->1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233……
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-08 20:05:48
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-09 14:08:57
 */
#include<stdio.h>

int fbn(int n)
{
    printf("Fibonacci = %d\n",n);
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fbn(n-1) + fbn(n-2);
    }
}
// 說明 Fibonacci
/*
    一開始 輸入 n(假定為5)，
    會先進入 else
    fbn(5-1) + (5-2)
    先說明 fbn(5-1) 
    會在進入迴圈 此時 n = 4 進入 else --> fbn(4-1) + (4-2)
    由 fbn(4-1) 在進入迴圈 n = 3 進入 else --> fbn(3-1) + (3-2)
    由 fbn(3-1) 在進入迴圈 n = 2 進入 if --> return 1
    其他可得知
                                        fbn(5) 
                                fbn(5-1) <--|--> fbn(5-2)
                        fbn(4-1)<-|->fbn(4-2)
                fbn(3-1)<-|->fbn(3-2)
        [1]fbn(2-1)<-|->fbn(2-2)[0]
*/

int main()
{
    int num = 0;
    printf("請輸入數字:");
    scanf("%d*d\n",&num); // -->後面的 *d 是消除 Enter 也可以使用 *c
    int res = fbn(num);
    printf("res = %d\n",res);
    return 0;
}


