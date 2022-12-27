#include<stdio.h>
int main()
{

int n, nooffactors=0;
scanf("%d", &n);

for(int i=1; i<=n; i++){
    if(n%i==0){
        nooffactors++;
    }  
} 

if(nooffactors%2==1){
    printf("Yes");
}
else if(nooffactors%2==0){
    printf("No");
}

return 0;
}