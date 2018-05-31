#include <iostream>
using namespace std;

int main()
{
    int n; 
    int num[100];
    double value[100];

    cin >> n;
    for (int i=0; i<n; i++) {
        int value1, final;
        cin >> num[i] >> value1 >> final;
        value[i] = (double)final/value1;
    }

    // 排序
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            if(value[j+1] > value[j]) {
                int t = num[j];
                num[j] = num[j+1];
                num[j+1] = t;
                double t_v = value[j];
                value[j] = value[j+1];
                value[j+1] = t_v;
            }
        }
    }

    // 找出分界点
    double bigvalue = 0;
    int bignum = 0;
    for (int i = 0; i < n-1; i++) {
        double diff = value[i] - value[i+1];
        if (diff > bigvalue)
        {
            bigvalue = diff;
            bignum = i;
        }
    }

    // 输出
    cout << bignum +1 << endl;
    for (int i=bignum; i>=0; i--) {
        cout << num[i] << endl;
    }
    cout << n - bignum - 1 << endl;
    for (int i=n-1; i>=bignum+1; i--) {
        cout << num[i] << endl;
    }
    return 0;
}