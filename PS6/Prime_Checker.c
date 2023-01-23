#include<stdio.h>
int isPrime (int n){
    int prime=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }

    if(prime==1){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{

int n;
scanf("%d", &n);

int arr[n];

for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
}

for(int i=0; i<n; i++){
    if(isPrime(arr[i])==1){
        printf("yes\n");
    }
    
    else if(isPrime(arr[i])==0){
        printf("no\n");
    }
}

return 0;
}
