#include <stdio.h>
int main()
{
    float num;
    printf("请输入一个浮点数：\n");
    scanf("%f", &num);
    printf("您输入浮点数是：%.2f,他的指数表示为：%e\n", num, num);
    return 0;
}

