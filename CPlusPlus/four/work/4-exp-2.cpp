// 4-exp-2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// CD-ROM类的声明

#include "pch.h"
#include <iostream>
using namespace std;

enum CD_ROM_Rank {SATA, USB, ATA, IDE, SCSI};
enum CD_ROM_Install {external, built_in};
class CD_ROM {
private:
	CD_ROM_Rank rank;
	int cachesize;
	CD_ROM_Install install;
public:
	// 构造函数
	CD_ROM(CD_ROM_Rank r, int c, CD_ROM_Install i) {
	// 类名(列举私有函数名+变量)
		rank = r;
		cachesize = c;
		install = i;
		cout << "构造了一个CD-ROM!" << endl;
	}
	// 析构函数
	~CD_ROM() { cout << "析构了一个CD-ROM!" << endl; }
	
	// 外部接口
		// 访问私有数据成员接口
	CD_ROM_Rank GetRank() const { return rank; }
	int GetCachesize() const { return cachesize; }
	CD_ROM_Install GetInstall() const { return install; }
		// 设置私有数据成员接口
	void SetRank(CD_ROM_Rank r) { rank = r; }
	void SetCachesize(int c) { cachesize = c; }
	void SetInstall(CD_ROM_Install i) { install = i; }
	// 执行语句
	void Run() { cout << "CD-ROM开始运行!" << endl; }
	void Stop() { cout << "CD-ROM开始运行!" << endl; }
};

int main()
{
	CD_ROM a(SATA, 1024, external);

	return 0;
}
