// 6-1.2.cpp
// ��Fibonacci���е�ǰ20�����������������

#include <iostream>
using namespace std;

int main() {
    int  f[20] = {1,1}; // ��ʼ����0��1����
    for (int i = 2 ; i < 20; i++ )   
        f[i] = f[i-2] + f[i-1]; // ���2~19����
    for (int i = 0; i < 20; i++) {
        if (i % 5 == 0) cout << endl; // �����ÿ��5����
        cout.width(12); // ����������Ϊ12
        cout << f[i];
    }

    return 0;
}
