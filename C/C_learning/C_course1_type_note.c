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
    // printf("�ڬO C �y���աA���O C++ !\n");
    // printf("�F�Ѷ�?\r�S��QAQ\n");
    // //�d�ݦr�`�j�p �ϥ� sizeof
    // printf("int ���r�`�j�p = %d \n",sizeof(int));

    // // �ƾ����欰 long  ��X�榡�� %ld
    // // �ƾ����欰 long  long ��X�榡�� %lld
    // long long num = 123;
    // printf("num = %lld\n",num);

    // //double
    // float d1 = 1.1;//�|��ĵ�i�A�ɶq�֥�
    // float d2 = 1.1f; //�i��
    // double d3 = 1.3;//�i��

    // double d4 = 5.12;
    // double d5 = .512;//����0.512
    // //�b��X�ɡA�p�G %f �q�{�O�d���p���I�� 6 ��

    // //�r��
    // char c1 = 'a';
    // char c2 = 'b';
    // //�o�ɷ�ڭ̥H %c ��X�ɡA�N�|�w�� ASCII �s�X��
    // //(����: �r�� <==> �Ʀr �������Y)
    // //���� 97 �����r���X
    // char c3 = 97;
    // printf("a= %c\nb= %c\nc= %c",c1,c2,c3);

    // // type �����ഫ
    // // ��� �C -> ��
    // // short -> int -> unsigned int -> long -> unsigned long -> 
    // // float -> double -> long double
    // char e1 = 'a';
    // int num1 = e1;
    // double f1 = num1;
    // printf("e1=%c\nnum1=%d\nf1=%f\n",e1,num1,f1);
    
    //�|��
    // float f1 = 1.1f;
    // double d2 = 4.564646999999;
    // f1 = d2;
    // //�w��רӻ� double > float
    // //���ɪ�����ഫ�|�X�{�l��
    // printf("f1=%.15f\nd2=%.15f\n",f1,d2); 
    // //����O 4.564646999999000
    // //��ܬ� 4.564647197723389 -> ���ƾڬ����~

    // // type �����ഫ(�j�������ഫ)
    double d1 = 1.234;
    int num = (int)d1; //�`�N�o��O�����I���p���I�᭱������
    printf("num = %d\nd1 = %f\n",num,d1);

    //�t��
    int num1 = (int)3.5*10+6*1.1;
    int num2 = (int)(3.5*10+6*1.1);
    printf("num1= %d\nnum2= %d\n",num1,num2);
    //�����t��:
    //num1 -> (int)3.5 -> 3
    // 3*10 + 6*1.1
    // 30 + 6.6 �]�� num1 ���ܼƫ��A�� int 6.6 �Q�j���ഫ�� 6
    //��ܿ�X�� 30+6 = 36
    
    


    //
    getchar();
    return 0; 
}


// ��q���� tab
//��q�k�� shift + tab



// �ֱ������ Ctrl + /
// �������� Ctrl + /
// printf("Hello! World!\n"); 
//     printf("�ڬO C �y���աA���O C++ !\n");
//     printf("�F�Ѷ�?\r�S��QAQ\n");
//     getchar();