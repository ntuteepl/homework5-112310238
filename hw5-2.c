#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time;
    float m;
    scanf("%d",&time);
    if(time<=800)
    {
        m=time*0.9;
    }
    if(time>800 && time<=1500)
    {
        m=(time*0.9)*0.9;
    }
    if(time>1500)
    {
        m=(time*0.9)*0.79;
    }
    printf("%.1f",m);
}

