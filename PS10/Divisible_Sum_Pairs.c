#include<stdio.h>
int main()
{
int n, k, sum, noofpairs=0;
scanf("%d", &n);
scanf("%d", &k);
int arr[n];

for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
}

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(i!=j){
            sum = arr[i]+arr[j];
            if(sum%k==0){
                noofpairs++;
                // printf("%d%d ", arr[i], arr[j]);
            }
        }
    }
}
printf("%d", noofpairs/2);

return 0;
}