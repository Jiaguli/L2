#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,ans=1;
    printf("請輸入兩個數字\n");
    scanf("%d",&x);
    scanf("%d",&y);
    for (int t=1;t<=x&&t<=y;t++){
        if(x%t==0&&y%t==0){
            ans=t;
        }
    }
    printf("最大公因數為：%d",ans);
    return 0;
}

