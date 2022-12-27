#include<stdio.h>
#include<math.h>
int main()
{
    
float pri, rate, time, si;
double ci;
scanf("%f %f %f", &pri, &rate, &time);

si = (pri*rate*time)/100;
ci =(pri*pow((1+(0.01*rate)), time)) - pri;

printf("%.2f %.2f", si, ci);


return 0;
}