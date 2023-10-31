#include <stdio.h>
main()
{
int time,s;
double money=0;

scanf("%d%d", &time, &s);


if(time>120)
    {
    money=((time-120)*s*1.66);
    money+=(60*s*1.33);//60~120
    money+=(60*s);//0~60
    printf("%.1f",money);
    }
else if(time<=120 && time>60)
    {
    money=((time-60)*s*1.33);
    money+=(60*s);//0~60
    printf("%.1f",money);
    }
else if(time<=60)
    {
    money=time*s;
    printf("%.1f",money);
    }

}

