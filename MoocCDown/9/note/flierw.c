�ļ���д

�ļ�˳�������
    ���밴�ļ����ַ����Ⱥ�˳����У�ֻ���ڲ����˵�i���ַ�֮�󣬲��ܲ�����i+1���ַ�
    �ڶ��ļ�����ʱ���ļ���λ��ָ����ϵͳ�Զ�����ļ�β�����ƶ���
    �ַ������������    fgetc(ch);          fputc(ch, fp);
    �ַ��������������  fgets(s, num, fp);  fputs(s, fp);
    ��ʽ�������������  fscanf();           fprintf()
    ���ݿ��������      fread();            fwrite()
char ch;
char s[];
FILE *fp;
fp = open("a.txt", "r+");
ch = fgetc(fp);
fputc(ch, fp);

/*  // �ַ�����
#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[20], ch;
    printf("Enter filename: ");
    scanf("%s", filename);
    if ((fp=fopen(filename, "r")) == NULL) {
        printf("file open error.\n");
        exit(0);
    }
    while((ch = fgetc(fp)) != EOF) {
        fputc(ch, stdout);  // stdout ��ʾ��ʾ���ļ�
    }

    return 0;
}
*/

    // �ַ�������
fgets(s, num, fp);
1. �Ѷ���num-1���ַ�����β����\0
2. �����ַ�����\n����βΪ\n\0
3. ���������ļ�β�����ļ�ȫ����ֵ��s
4. ���ļ��ѽ�β��Ҫ�������ļ��򷵻�NULL����ʾ�ļ�����

fgets(s, 4, fp);
abcd\n

f -> s= abc\0
fgets(s, 4, fp);
d\n

f -> s= d\n\0
fgets(s, 4, fp);
fEOF -> s= f\0
fgets(s, 4, fp);
���ؿ�ָ��

���� fsave();
void fsave() {
    FILE *fp;
    int i;
    if ((fp=fopen("d:\\student", "wb")) == NULL) {
        printf("Cannot open file.\n");
        return;
    }
    for (i=0; i<SIZE; i++) {
        if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1) {
            printf("File write error.\n");
        }
    }
    fclose(fp);
}