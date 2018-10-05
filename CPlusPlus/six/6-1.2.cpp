// 6-1.2.cpp
// 求Fibonacci数列的前20项，将结果存放于数组中

#include <iostream>
using namespace std;

int main() {
    int  f[20] = {1,1}; // 初始化第0，1个数
    for (int i = 2 ; i < 20; i++ )   
        f[i] = f[i-2] + f[i-1]; // 求第2~19个数
    for (int i = 0; i < 20; i++) {
        if (i % 5 == 0) cout << endl; // 输出，每行5个数
        cout.width(12); // 设置输出宽度为12
        cout << f[i];
    }

    return 0;
}
