#include <stdio.h>

struct s{
    int x;
    int *y;
}

int data[5] = {10, 20, 30, 40, 50};
struct s array[5] = {
    100, &data[0], 200, &data[1], 300, &data[2], 400, &data[3], 500, &data[4]
    };
/*
    array[0].x == 100;  array[0].y == data[0];
    array[1].x == 200;  array[1].y == data[1];
    array[2].x == 300;  array[2].y == data[2];
    array[3].x == 400;  array[3].y == data[3];
    array[4].x == 500;  array[4].y == data[4];
*/

int main()
{
    int i=0;
    struct s s_var;     // s µÄ s_var
    s_var = array[0];
    printf("%d\n", s_var.x);    // 100
    printf("%d\n", *s_var.y);   // 10
    printf("%d\n", array[i].x); // 100
    printf("%d\n", *array[i].y);// 10
    printf("%d\n", ++ array[i].x);      // 101 
    printf("%d\n", ++ * array[i].y);    // 11
    printf("%d\n", array[++i].x);       // 200
    printf("%d\n", * ++ array[i].y);    //*30   *++
    printf("%d\n", (* array[i].y) ++);  // 30   *++
    printf("%d\n", * (array[i].y ++));  // 31   *++
    printf("%d\n", * array[i].y ++);    // 40      
    printf("%d\n", * array[i].y);       // 50
}
