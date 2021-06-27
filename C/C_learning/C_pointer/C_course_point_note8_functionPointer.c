/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 11:33:46
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 16:39:12
 */
?〗/*
 * @Descripttion: how to use function pointer
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 11:33:46
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 13:54:13
 */
#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int x, y, maxval;
    /*
        弧ㄧ计皐
        1.ㄧ计皐 pmax
        2.int ボ赣㎝计皐ㄧ计琌 int 摸
        3.(int,int) ボ赣ㄧ计皐ㄧ计把琌钡Μ 2  int
        (干)4.﹚竡ㄧ计皐糶把 int (*pmax)(int x, int y )=max;
            单 (*pmax)(int, int) = max;
    */
    int (*pmax)(int, int) = max;
    printf("Input two numbers:");
    scanf("%d %d*c", &x, &y);
    /*
    ??s
    |-----------------------------------------------------|
    |                                                     |
    |   |-------------------------------------------|     |
    |   |stack                                      |     |
    |   |int(*pmax)(int,int)=max;                   |     |
    |   |      pmax---> 0x1122 ---------------------|-|   |
    |   |-------------------------------------------| |   |
    |                                                 |   |
    |   |-------------------------------------------| |   |
    |   |code                                       | |   |
    |   | pmax 0x1122 <-------------------------|-|   |
    |   |    int(*pmax)(int,int)                    |     |
    |   | {                                         |     |
    |   |   return a>b?a:b;                         |     |
    |   | }                                         |     |
    |   |-------------------------------------------|     |
    |-----------------------------------------------------|
*/
    // (*pmax)(x, y) 硄筁ㄧ计皐秸ノ ㄧ计 max
    maxval = (*pmax)(x, y); 
    printf("Max value: %d\n", maxval);
    printf("pmax store address: %p\tpmax address: %p\n", pmax, &pmax);
    return 0;
  