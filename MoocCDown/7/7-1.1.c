#include <stdio.h>

struct stud
{
    int num;
    char name[20];
    char sex;
    int age;
}
 
struct student stu[3] = {
// struct student stu[] = {
    {100, "Wang Lin", 'M', 20},
    {101, "Li Gang", 'M', 19},
    {110, "Lin Yan", 'F', 19}
};  // ��ʼ���ṹ��

// ����/��ֵ��ʽ
stu[1].num = 1;         
// ����/���Ʒ�ʽ
strcpy(stu[0].name, "ZhaoDa");

int main()
{
    
    return 0;
}