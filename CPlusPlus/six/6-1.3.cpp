// 6-1.3.cpp
// ͳ���û�����Ľ��������ÿһ�������ȷ��
/*
    һά������
    *arr+1 == *(arr+1) == arr[1]
*/
#include <iostream>
using namespace std;

int main() {
    const char key[] = {'a', 'c', 'b', 'a', 'd'};
    const int NUM_QUES = 5;
    char c;
    int ques = 0;   // ����
    int numCorrect = 0; // ��ȷ����
    cout << "Enter the " << NUM_QUES << " question tests:" << endl;
    while(cin.get(c)) {
        if (c != '\n') {
            if(c == key[ques]) {// quesΪ�±�
                numCorrect++;
                cout << " ";	// �� 
            }else 
                cout << "*";    // �� 
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
