#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chinese,english,math,scince,society,average;
    printf("�п�J�A����妨�Z");
    scanf("%f",&chinese);
    printf("�п�J�A���^�妨�Z");
    scanf("%f",&english);
    printf("�п�J�A���ƾǦ��Z");
    scanf("%f",&math);
    printf("�п�J�A�����|���Z");
    scanf("%f",&society);
    printf("�п�J�A���۵M���Z");
    scanf("%f",&scince);
    average=(english+math+scince+society+chinese)/5;
    printf("�A�������O�G%4.2f",average);
    return 0;
}
