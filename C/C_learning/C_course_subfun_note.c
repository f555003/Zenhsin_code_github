/*
 * @Descripttion: use General recursive function to finish Successione di Fibonacci
 *                e.q. -->1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233�K�K
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
// ���� Fibonacci
/*
    �@�}�l ��J n(���w��5)�A
    �|���i�J else
    fbn(5-1) + (5-2)
    ������ fbn(5-1) 
    �|�b�i�J�j�� ���� n = 4 �i�J else --> fbn(4-1) + (4-2)
    �� fbn(4-1) �b�i�J�j�� n = 3 �i�J else --> fbn(3-1) + (3-2)
    �� fbn(3-1) �b�i�J�j�� n = 2 �i�J if --> return 1
    ��L�i�o��
                                        fbn(5) 
                                fbn(5-1) <--|--> fbn(5-2)
                        fbn(4-1)<-|->fbn(4-2)
                fbn(3-1)<-|->fbn(3-2)
        [1]fbn(2-1)<-|->fbn(2-2)[0]
*/

int main()
{
    int num = 0;
    printf("�п�J�Ʀr:");
    scanf("%d*d\n",&num); // -->�᭱�� *d �O���� Enter �]�i�H�ϥ� *c
    int res = fbn(num);
    printf("res = %d\n",res);
    return 0;
}


