#include<stdio.h>
#define  SIZE 3

struct student                        /* ����ṹ */
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
    for ( i=0; i<SIZE; i++ ) { /* �Ӽ��̶���ѧ������Ϣ(�ṹ) */
        printf ("Input student %d:", i+1);
        scanf ("%ld%s%d%s",&stu[i].num,stu[i].name,&stu[i].age,stu[i].address);
        }
    fsave( );                                /* ���ú�������ѧ����Ϣ */
    fp = fopen ("d:\\student", "rb");      /* �Զ����ƶ���ʽ�������ļ� */
    printf ("    No.   Name        Age  Address\n");
    while ( fread(&out, sizeof(out),1,fp) ) /*�Զ����ݿ鷽ʽ������Ϣ */
    printf("%8ld %-10s %4d %-10s\n",
        out.num,out.name,out.age,out.address);
    fclose(fp);                                          /* �ر��ļ� */
}

void fsave ( )
{ 
	FILE *fp;
	int i;
	if((fp=fopen("d:\\student","wb"))==NULL) /* ������д��ʽ */
	{ 
	  	printf ("Cannot open file.\n");   
	  	return;
	}
    for(i=0; i<SIZE; i++ )    /*���ṹ�����ݿ���ʽд���ļ� */
    	if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
       		printf("File write error.\n");      /* ������ */
    fclose (fp);                             /* �ر��ļ� */
}

