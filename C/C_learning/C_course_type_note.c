/*
 * @Author: MuHsin
 * @Date: 2021-03-25 19:38:43
 * @LastEditTime: 2021-05-23 15:28:10
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c++code\123.cpp
 */
#include <stdio.h>


int main() { 
    // printf("Hello! World!\n"); 
    // printf("我是 C 語言啦，不是 C++ !\n");
    // printf("了解嗎?\r兄弟QAQ\n");
    // //查看字節大小 使用 sizeof
    // printf("int 的字節大小 = %d \n",sizeof(int));

    // // 數據類行為 long  輸出格式為 %ld
    // // 數據類行為 long  long 輸出格式為 %lld
    // long long num = 123;
    // printf("num = %lld\n",num);

    // //double
    // float d1 = 1.1;//會有警告，盡量少用
    // float d2 = 1.1f; //可行
    // double d3 = 1.3;//可行

    // double d4 = 5.12;
    // double d5 = .512;//等於0.512
    // //在輸出時，如果 %f 默認保留為小數點後 6 位

    // //字串
    // char c1 = 'a';
    // char c2 = 'b';
    // //這時當我們以 %c 輸出時，就會安裝 ASCII 編碼表
    // //(說明: 字串 <==> 數字 對應關係)
    // //對應 97 對應字串輸出
    // char c3 = 97;
    // printf("a= %c\nb= %c\nc= %c",c1,c2,c3);

    // // type 類型轉換
    // // 精度 低 -> 高
    // // short -> int -> unsigned int -> long -> unsigned long -> 
    // // float -> double -> long double
    // char e1 = 'a';
    // int num1 = e1;
    // double f1 = num1;
    // printf("e1=%c\nnum1=%d\nf1=%f\n",e1,num1,f1);
    
    //舉例
    // float f1 = 1.1f;
    // double d2 = 4.564646999999;
    // f1 = d2;
    // //已精度來說 double > float
    // //此時的精度轉換會出現損失
    // printf("f1=%.15f\nd2=%.15f\n",f1,d2); 
    // //期望是 4.564646999999000
    // //顯示為 4.564647197723389 -> 此數據為錯誤

    // // type 類型轉換(強制類型轉換)
    double d1 = 1.234;
    int num = (int)d1; //注意這邊是直接截掉小數點後面的部分
    printf("num = %d\nd1 = %f\n",num,d1);

    //差異
    int num1 = (int)3.5*10+6*1.1;
    int num2 = (int)(3.5*10+6*1.1);
    printf("num1= %d\nnum2= %d\n",num1,num2);
    //說明差異:
    //num1 -> (int)3.5 -> 3
    // 3*10 + 6*1.1
    // 30 + 6.6 因為 num1 的變數型態為 int 6.6 被強制轉換為 6
    //顯示輸出為 30+6 = 36
    
    


    //
    getchar();
    return 0; 
}


// 整段左移 tab
//整段右移 shift + tab



// 快捷鍵註釋 Ctrl + /
// 取消註釋 Ctrl + /
// printf("Hello! World!\n"); 
//     printf("我是 C 語言啦，不是 C++ !\n");
//     printf("了解嗎?\r兄弟QAQ\n");
//     getchar();