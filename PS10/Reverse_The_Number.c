#include<stdio.h>
int main()
{

int n, ori ,rem;
scanf("%d", &n);
ori=n;
while(ori>0){
    rem=ori%10;
    printf("%d", rem);
    ori=ori/10;
}

return 0;
}