/*
 * @Descripttion: 
 * @version: 
 * @Author: Mu-Hsin,Wu
 * @Date: 2021-06-27 11:56:24
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-06-27 13:58:45
 */
#include<stdio.h>
#include<stdlib.h>

/*
    奔ㄧ计
    1.int(*f)(void)
    2. f 碞琌ㄧ计皐钡Μㄧ计琌 (琌int,⊿Τ把ㄧ计)
    3. f  initArray 硂柑砆秸ノ讽秸ㄧ计à︹
*/


void initArray(int *array, int arraySize, int(*f)(void))
{
    int i;
    for ( i = 0; i < arraySize; i++)
    {
        array[i]=(*f)();
        //硄筁ㄧ计皐秸ノ getNextRandomValue
        // (*f)() 单基 f()
    }
    
}

int getNextRandomValue(void)
{
    return rand();
}


int main()
{
    int myarray[10],i;//﹚竡计舱㎝ int
    /*
        弧
        1.㊣ initArray ㄧ计
        2.肚ㄧ计 getNextRandomValue()惠璶ㄧ计皐钡Μ
    */
    initArray(myarray,10,getNextRandomValue);
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",myarray[i]);
    }
    
    return 0;
}