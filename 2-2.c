#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chinese,english,math,scince,society,average;
    printf("請輸入你的國文成績");
    scanf("%f",&chinese);
    printf("請輸入你的英文成績");
    scanf("%f",&english);
    printf("請輸入你的數學成績");
    scanf("%f",&math);
    printf("請輸入你的社會成績");
    scanf("%f",&society);
    printf("請輸入你的自然成績");
    scanf("%f",&scince);
    average=(english+math+scince+society+chinese)/5;
    printf("你的平均是：%4.2f",average);
    return 0;
}
