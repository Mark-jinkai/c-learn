#include <stdio.h>
#include<string.h>
#define DENSITY 62.4

int main() 
{
    float weight ,volume;
    int size, letters;
    char name[40]; //字符串中的字符存储在相邻的储存单元之中，每个单元存储一个字符。且末尾是\0
    printf("Hi! What's your first name?");
    scanf("%s", name);
    printf("%s, What's your weight in pounds?", name);
    scanf("%f", &weight);
    size = sizeof name; //计算name的总的大小
    letters = strlen(name); //计算name的字符数
    volume =weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
//%s 输出的是字符串，%d 输出的是整数，%f 输出的是浮点数，%2.2f 输出的是浮点数，其中2表示总共有两位，.2表示小数点后有两位。

}