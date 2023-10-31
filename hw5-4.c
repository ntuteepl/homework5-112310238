#include <stdio.h>
#include <stdlib.h>

int main()
{
    float H,M,a;
    int hour,min;
    scanf("%d%d",&hour,&min);
    H=(hour*30)+min*0.5;
    M=min*6;
    if(H>M)
    {
        a=H-M;
    }
    else a=M-H;

    if(a>180)
    {
        a-=180;
    }
    printf("%.3f",a);



}

