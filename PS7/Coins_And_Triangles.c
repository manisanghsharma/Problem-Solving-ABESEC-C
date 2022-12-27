#include<stdio.h>
int main()
{
int n;
int sum=0;
int i = 1;
int count;
scanf("%d", &n);
while(n>=sum){
    sum = sum+i;
    i++;
    count++;
}
printf("%d",count-1);
return 0;
}