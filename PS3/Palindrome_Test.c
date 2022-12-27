
#include<stdio.h>
#include<math.h>
int main()
{

int n, reversed;
scanf("%d", &n);
int ori=n;
while(n>0){
    reversed = reversed * 10 + n%10; 
    n=n/10;
}

if(ori==reversed){
    printf("Yes");
}

else{
    printf("No");
}
}