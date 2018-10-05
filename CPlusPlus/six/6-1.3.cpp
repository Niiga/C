// 6-1.3.cpp
// 统计用户答题的结果，给出每一组解答的正确率
/*
    一维数组中
    *arr+1 == *(arr+1) == arr[1]
*/
#include <iostream>
using namespace std;

int main() {
    const char key[] = {'a', 'c', 'b', 'a', 'd'};
    const int NUM_QUES = 5;
    char c;
    int ques = 0;   // 计数
    int numCorrect = 0; // 正确的数
    cout << "Enter the " << NUM_QUES << " question tests:" << endl;
    while(cin.get(c)) {
        if (c != '\n') {
            if(c == key[ques]) {// ques为下标
                numCorrect++;
                cout << " ";	// 对 
            }else 
                cout << "*";    // 错 
            ques++;
        } else {
            cout << " Score " << static_cast<float>(numCorrect)/NUM_QUES*100 << "%";
            ques = 0;
            numCorrect = 0;
            cout << endl;
        }
    }

    return 0;
}
