// 6-5.2.cpp 
// ָ��ĳ�ʼ���͸�ֵ

#include <iostream>
using namespace std;
// ָ������ĸ�ֵ����
//  ������ֻ�� 0���Ը�ֵ��ָ�룬��ʾ��ָ��
//  C++11 ʹ��nullptr�ؼ��֣��Ǳ���׼ȷ�����Ͱ�ȫ�Ŀ�ָ��


int main()
{
    int i;
    int *ptr = &i; // ָ��ĳ�ʼ��
    // ȡ i�ĵ�ַ����ptr
    i = 10;
    cout.width(7);
    cout << "i = "  << i << endl; // ���int������ֵ
    cout.width(7);
    cout << "*ptr = " << *ptr << endl; // ���int��ָ����ָ��ַ������
    cout.width(7);
    cout << "ptr = " << ptr << endl; // ���int *�ͱ�����ֵ
    cout.width(7);
    cout << "&i = " << &i << endl; // ��� i�ĵ�ַ

    return 0;
}
