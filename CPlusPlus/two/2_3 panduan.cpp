//#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
    int a, b, x;

    cout << "input value of a: \n";
    cin >> a;
    cout << "input value of b: \n";
    cin >> b;

    x = (a-b)>0 ? (a-b):(b-a);
    // if (a-b)>0 {a-b}; else {b-a};
    cout << "The difference of a and b is: " << x;

    return 0;
}
