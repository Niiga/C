// 4-exp-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// RAM类的声明

#include "pch.h"
#include <iostream>
using namespace std;

enum  RAM_Rank{ DDR4, DDR3, DDR2, DDR1};
class RAM {
private:
	RAM_Rank rank;
	int capacity;
	float frequency;
public:
	RAM(RAM_Rank r, int c, float f) {// 构造函数
		rank = r;
		capacity = c;
		frequency = f;
		cout << "构造了一个RAM!" << endl;
	}
	~RAM() { cout << "析构了一个RAM!" << endl; } // 析构函数

	// 外部接口
		// 访问3个私有数据成员的接口
	RAM_Rank GetRank() const { return rank; }
	int GetCapacity() const { return capacity; }
	float GetFrequency() const { return frequency; }
		// 设置3个私有数据成员的接口
	void SetRank(RAM_Rank r) { rank = r; }
	void SetCapacity(int c) { capacity = c; }
	void SetFrequency(float f) { frequency = f; }

	// 程序设计规定的RUN和STOP两条语句
	void Run()  { cout << "RAM开始运行!" << endl; }
	void Stop() { cout << "RAM停止运行!" << endl; }
};

int main()
{
	RAM a(DDR4, 300, 2.8);
	a.Run();
	a.Stop();


	return 0;
}
