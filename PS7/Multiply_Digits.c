#include<stdio.h>
int main()
{
int n, rem=1;
scanf("%d", &n);
int product=1;
while(n>0){
    rem=n%10;
    product = product*rem;
    n=n/10;
}
printf("%d", product);
return 0;
}