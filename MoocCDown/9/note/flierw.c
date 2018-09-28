文件读写

文件顺序操作：
    必须按文件中字符的先后顺序进行，只能在操作了第i个字符之后，才能操作第i+1个字符
    在对文件操作时，文件的位置指针由系统自动向后（文件尾方向）移动。
    字符输入输出函数    fgetc(ch);          fputc(ch, fp);
    字符串输入输出函数  fgets(s, num, fp);  fputs(s, fp);
    格式化输入输出函数  fscanf();           fprintf()
    数据块输入输出      fread();            fwrite()
char ch;
char s[];
FILE *fp;
fp = open("a.txt", "r+");
ch = fgetc(fp);
fputc(ch, fp);

/*  // 字符操作
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
        fputc(ch, stdout);  // stdout 表示显示器文件
    }

    return 0;
}
*/

    // 字符串操作
fgets(s, num, fp);
1. 已读入num-1个字符，串尾加上\0
2. 读入字符遇到\n，串尾为\n\0
3. 读入遇到文件尾，则将文件全部赋值给s
4. 当文件已结尾，要继续读文件则返回NULL，表示文件结束

fgets(s, 4, fp);
abcd\n

f -> s= abc\0
fgets(s, 4, fp);
d\n

f -> s= d\n\0
fgets(s, 4, fp);
fEOF -> s= f\0
fgets(s, 4, fp);
返回空指针

保存 fsave();
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