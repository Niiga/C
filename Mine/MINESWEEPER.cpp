#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

#define NUM 3 // 输出宽度定义
using namespace std;

void Minesweeper (int a[][32],int x, int y, int mine); // 随机初始化一张扫雷地图
void UserInOut (int a[][32], int x, int y); // 读取用户输入
void CopyMine (int num[][32], int a[][32], int i, int j); // 复制用户输入的坐标到新的数组
void OutMine (int num[][32], int x, int y); // 输出新的数组


// 随机初始化一张扫雷地图
void Minesweeper( int a[][32],int x, int y, int mine) {
    int i, j;
    int num;

    // 初始化 雷
    srand((int)time(0));    // 按照时间获得随机数
    for (num=0; num<mine; num++) {
        i = rand()%x;
        j = rand()%y;

        if (a[i][j] == -1)  // 判断是否重复赋值
            num --;         // 重复了就重新随机一次
        else
            a[i][j] = -1;
    }

    // 初始化 数字
    for (i=0; i<x; i++) {
        // num 计数君，记录每一个位置，以自己为中心的九宫格内雷的个数
        for (j=0; j<y; j++) {
        	num = 0;
            if (a[i][j] != -1) {
                // 四角
                if (i==0 && j==0) {
                    if (a[i][j+1] == -1)   num ++;
                    if (a[i+1][j] == -1)   num ++;
                    if (a[i+1][j+1] == -1) num ++;
                }
                if (i==0 && j==(y-1)) {
                    if (a[i][j-1] == -1)   num ++;
                    if (a[i+1][j-1] == -1) num ++;
                    if (a[i+1][j] == -1)   num ++;
                }
                if (i==(x-1) && j==0) {
                    if (a[i][j+1] == -1)   num ++;
                    if (a[i-1][j] == -1)   num ++;
                    if (a[i-1][j+1] == -1) num ++;
                }
                if (i==(x-1) && j==(y-1)) {
                    if (a[i][j-1] == -1)   num ++;
                    if (a[i-1][j-1] == -1) num ++;
                    if (a[i-1][j] == -1)   num ++;
                }
                // 四边
                if (i==0 && j!=0 && j!=(y-1)) {
                    if (a[i][j-1] == -1)   num ++;
                    if (a[i][j+1] == -1)   num ++;
                    if (a[i+1][j-1] == -1) num ++;
                    if (a[i+1][j] == -1)   num ++;
                    if (a[i+1][j+1] == -1) num ++;
                }
                if (i==(x-1) && j!=0 && j!=(y-1)) {
                    if (a[i][j-1] == -1)   num ++;
                    if (a[i][j+1] == -1)   num ++;
                    if (a[i-1][j-1] == -1) num ++;
                    if (a[i-1][j] == -1)   num ++;
                    if (a[i-1][j+1] == -1) num ++;
                }
                if (j==0 && i!=0 && i!=(x-1)) {
                    if (a[i-1][j] == -1)   num ++;
                    if (a[i+1][j] == -1)   num ++;
                    if (a[i-1][j+1] == -1) num ++;
                    if (a[i][j+1] == -1)   num ++;
                    if (a[i+1][j+1] == -1) num ++;
                }
                if (j==(y-1) && i!=0 && i!=(x-1)) {
                    if (a[i-1][j-1] == -1)   num ++;
                    if (a[i][j-1] == -1)   num ++;
                    if (a[i+1][j-1] == -1)   num ++;
                    if (a[i-1][j] == -1) num ++;
                    if (a[i+1][j] == -1) num ++;
                }
                // 中间
                if (i>0 && i<(x-1) && j>0 && j<(y-1)) {
                    if (a[i-1][j-1] == -1) num ++;
                    if (a[i-1][j] == -1)   num ++;
                    if (a[i-1][j+1] == -1) num ++;
                    if (a[i][j-1] == -1)   num ++;
                    if (a[i][j+1] == -1)   num ++;
                    if (a[i+1][j-1] == -1) num ++;
                    if (a[i+1][j] == -1)   num ++;
                    if (a[i+1][j+1] == -1) num ++;
                }
                a[i][j] = num;
            }
        }
    }

}

int UserInOut(int a[][32], int x, int y, int mi) {
    // int mi; mi是雷数
    int num[x][32];
   
    int n1, n2;
    int i, j;
    int win=0;

    // 初始化num 数组 为-2
    for (i=0; i<x; i++) {
    	for (j=0; j<y; j++) {
    		num[i][j] = -2;
		}
	}

    while (win < (x*y)-mi) {
        cout << "输入坐标(格式a b): ";
        cin >> i >> j;
        i --;
        j --;

        if (a[i][j] == -1) {   // 踩雷
            CopyMine(num, a, i, j); win ++;
            OutMine(num, x, y);
            cout << "游戏结束，您输了" << endl;
            cout << "请继续努力！" << endl;
            return 0;
        }

        if (a[i][j] > 0 && a[i][j] < 9) {  // 数字
            CopyMine(num, a, i, j); win ++;
            OutMine(num, x, y);
        }

        if (a[i][j] == 0) { 
            // 当点开为0的时候，输出周围所有0和数字
            // ？
            CopyMine(num, a, i, j); win++;
            OutMine(num, x, y);
            // 不知道怎么实现
        }
        if (win == (x*y)-mi) {
            cout << "游戏结束，您赢了" << endl;
            cout << "恭喜您！" << endl;
            return 0;
        }
        
    }

    
}

void OutMine(int num[][32], int x, int y) {
    int i, j;

    system("cls");
    cout << setw(NUM-1) << " ";
    for (i=0; i<x; i++) {
    	cout << setw(NUM) << i+1;
	}
	cout << endl;
	
    for (i=0; i<x; i++) {
    	cout << setw(NUM-1) << i+1;
        for (j=0; j<y; j++) {
            if (num[i][j] == -2) cout << setw(NUM) << "?";
            if (num[i][j] == -1) cout << setw(NUM) << "*";
            if (num[i][j] > 0 && num[i][j] < 9) cout << setw(NUM) << num[i][j];
            if (num[i][j] == 0) cout << setw(NUM) << "-";   
        }
        cout << endl;
    }
}

void CopyMine(int num[][32], int a[][32], int i, int j) {
    num[i][j] = a[i][j];
}

int main()
{
    int i, n0, n1, n2;
    cout << "输入所选难度: " << endl;
    cout << "1. 初级(地图: 10*10 雷个数: 10)" << endl;
    cout << "2. 中级(地图: 16*16 雷个数: 40)" << endl;
    cout << "3. 高级(地图: 16*32 雷个数: 99)" << endl;
    cout << "4. 自定义(注最大地图: 16*32)"<< endl;
    cin >> i;

    switch (i) {
        case 1:
            n0 = n1 = n2 = 10;
            break;
        case 2:
            n0 = n1 = 16;
            n2 = 40;
            break;
        case 3:
            n0 = 16;
            n1 = 32;
            n2 = 99;
            break;
        case 4:
            cout << "输入地图: (x y) ";
            cin >> n0 >> n1;
            cout << "输入雷个数: ";
            cin >> n2;
            break;
    }

    int a[n0][32] = {0};
    Minesweeper(a, n0, n1, n2); // 随机初始化一张扫雷地图

    // 输出完整棋盘
    system("cls");
    cout << setw(NUM-1) << " ";
    for (i=0; i<n1; i++) {
    	cout << setw(NUM) << i+1;
	}
	cout << endl;
	
    for (i=0; i<n0; i++) {
    	cout << setw(NUM-1) << i+1;
        for (int j=0; j<n1; j++) {
            cout << setw(NUM) << "?"; 
        }
        cout << endl;
    }
    
    UserInOut(a, n0, n1, n2); // 用户输入

    /* 输出完整地图
    for (i=0; i<n0; i++) {
    	cout << setw(NUM-1) << i+1;
        for (int j=0; j<n1; j++) {
            if (a[i][j] == -1)
                cout << setw(NUM) << "*";
            else if (a[i][j] == 0)
                cout << setw(NUM) << "-";
            else
                cout << setw(NUM) << a[i][j];
        }
        cout << endl;
    }
    */
    

    return 0;
}
