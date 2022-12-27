#include<stdio.h>
int factorial(int);
int main()
{

int n;
scanf("%d", &n);
int sumofdigits, rem, ori;
for(int i=1; i<=n; i++){
    sumofdigits=0;
    ori=i;
    while(ori>0){
        rem=ori%10;
        sumofdigits = sumofdigits + factorial(rem);
        ori=ori/10;
    }
    if(sumofdigits == i){
        printf("%d ", i);
    }
}

return 0;
}

int factorial(int n){
    if (n==1 || n==0){
        return 1;
    }
    return n * factorial(n-1);
}