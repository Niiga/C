c11_102.c   C语言的源程序
c11_102.obj 目标文件
C11_102.exe 可执行文件

文本文件，或称ASCII文件（文本文件使用编辑软件可以直接阅读
二进制文件，将数据直接保存为原始的二进制格式

typedef struct
{
    short level;            /* 文件缓冲区中剩余的字节数 */
    unsigned flags;         /* 文件状态标志 */
    char fd;                /* 文件描述符 */
    unsigned char hold;     /* 缓冲区满时丢失的字符 */
    short bsize;            /* 文件缓冲区大小 */
    unsigned char *buffer;  /* 文件缓冲区地址 */
    unsigned char *curp;    /* 文件读写下一个字符位置 */
    unsigned istemp;        /* 临时文件指针 */
    short token;            /* 校验符 */
} FILE;

// FILE * 文件型指针变量名; 
FILE *fp;   // 指向文件结构
/* 对于每一个要打开的文件，都需要有一个这样的指针型文件
系统标准设备文件除外，这个文件是由系统自动打开和关闭。
标准设备文件的指针变量由系统命名，用户在程序中可直接使用。
C语言中提供了三个标准设备文件的指针：
    stdin   标准输入文件（键盘）
    stdout  标准输出文件（显示器）
    stderr  标准错误输出文件（显示器）
*/

getchar();  // 等待输入字符
/*
scanf("%c", &a);
fflush(stdin);  // 清除
getchar();
*/

文件的处理：打开文件->操作文件->关闭文件。
打开文件：'fopen函数'
    fp = fopen(文件名, 文件使用方式);   // fopen("d:\\file.txt","w"); 或 fopen(filename. "r");
    if ((fp=fopen("d:\\file.txt", "r")) == NULL) {  // 打开错误
        printf ("Cannot open file. \n");
        exit(0);
    }
    fclose(fp); // 关闭已打开的文件，切断缓冲区与该文件的联系，并释放文件指针
按指定的文件使用方式打开指定的文件，若打开成功则返回值为非NULL指针；失败则返回NULL。
'r' 只读    文件不存在则返回NULL
'w' 只写    文件不存在则建立新文件，若文件已存在则清空文件重新写入
'a' 追加    在文本文件末尾增加数据，若文件不存在则返回NULL
'r+'        对文本进行读/写操作，若文件不存在则返回NULL
'w+'        对文本进行读/写操作，若文件已存在则清空，不存在则新建
'a+'        对文本进行读/追加操作
二进制文件的打开方式：
'rb' 只读
'wb' 只写
'ab' 追加
'rb+'
'wb+'
'ab+'