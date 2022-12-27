#include<stdio.h>
int main()
{
int n, i, sum=0;
scanf("%d", &n);
int arr[n-1];

for(i=0; i<(n-1) ; i++){
    scanf("%d", &arr[i]);
}

for(i=0; i<(n-1); i++){
    sum = sum + arr[i];
}

printf("%d", sum);

return 0;
}