#include<stdio.h>
int main()
{

int num, k=2;
int primeno=1;
scanf("%d",&num);
int arr[num];

for(int i=0; i<num; i++){
    scanf("%d", &arr[i]);
}

for(int j=0; j<num ;j++){
    while(k<(arr[j])){
        if (arr[j]%k==0){
            primeno=0;
            break;
        }
        k++;
    }

    if (primeno==0){
        printf("no\n");}
    else if(primeno==1){
        printf("yes\n");
    }
    primeno=1;
    k=2;
}

return 0;
}