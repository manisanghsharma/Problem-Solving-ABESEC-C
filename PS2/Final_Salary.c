#include<stdio.h>
int main()
{

float bs, hra, da, gs;
scanf("%f", &bs);

if (bs<=10000.00){
    hra=0.08*bs;
    da=0.1*bs;
}

else if (bs>10000.00 && bs<=20000.00){
    hra=0.16*bs;
    da=0.2*bs;
}


else if (bs>20000.00){
    hra=0.24*bs;
    da=0.3*bs;
}

gs = hra + da + bs;
printf("%.2f", gs);
}