#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int x=1;x<=9;x++){
        for(int y=1;y<=9;y++){
            printf("%4d",x*y);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
