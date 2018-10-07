// 6-2.1.cpp
// 用数组名做参数

#include <iostream>
using namespace std;

void rowSum(int a[][4], int nRow) {
    for (int i = 0; i < nRow; i++) {
        for (int j = 1; j < 4; j++)
			a[i][0] += a[i][j]; 
    }
}

int main()
{
    // 定义并初始化数组
    int table[3][4] = {{1,2,3,4}, {2,3,4,5}, {3,4,5,6}};
    for (int i=0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            cout << table[i][j] << "  ";
        cout << endl;
    }
    
    rowSum(table, 3); // 传输的是数组的首地址

    // 输出计算结果
    for (int i = 0; i < 3; i++)
        cout << "Sum of row" << i << " is " << table[i][0] << endl;

    return 0;
}
