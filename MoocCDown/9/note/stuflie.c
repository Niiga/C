#include<stdio.h>
#define  SIZE 3

struct student                        /* 定义结构 */
{  	
    long num;    
	char name[10];
   	int  age;    
	char address[10];
} stu[SIZE], out;



void fsave ( );
main ( )
{ 
    FILE *fp;
    int  i;
    for ( i=0; i<SIZE; i++ ) { /* 从键盘读入学生的信息(结构) */
        printf ("Input student %d:", i+1);
        scanf ("%ld%s%d%s",&stu[i].num,stu[i].name,&stu[i].age,stu[i].address);
        }
    fsave( );                                /* 调用函数保存学生信息 */
    fp = fopen ("d:\\student", "rb");      /* 以二进制读方式打开数据文件 */
    printf ("    No.   Name        Age  Address\n");
    while ( fread(&out, sizeof(out),1,fp) ) /*以读数据块方式读入信息 */
    printf("%8ld %-10s %4d %-10s\n",
        out.num,out.name,out.age,out.address);
    fclose(fp);                                          /* 关闭文件 */
}

void fsave ( )
{ 
	FILE *fp;
	int i;
	if((fp=fopen("d:\\student","wb"))==NULL) /* 二进制写方式 */
	{ 
	  	printf ("Cannot open file.\n");   
	  	return;
	}
    for(i=0; i<SIZE; i++ )    /*将结构以数据块形式写入文件 */
    	if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
       		printf("File write error.\n");      /* 出错处理 */
    fclose (fp);                             /* 关闭文件 */
}

