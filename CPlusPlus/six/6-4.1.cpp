// 6-4.1.cpp
// 基于范围的for循环举例

#include <iostream>
// using namespace std;

/*
int main() 
{
    int array[3] = {1,2,3};
    int *p;
    for( p = array ; p < array + sizeof(array) / sizeof(int) ; ++p) {
        *p += 2;
        std::cout << *p << std::endl;
    }

    return 0;
}
*/
int main()
{
    int array[3] = {1,2,3};
    for (int & e:array) {
        e += 2;
        std::cout << e << std::endl;
    }

    return 0;
}