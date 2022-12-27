#include<stdio.h>
#include<math.h>
void armstrongrange(int,int);
int main()
{

int r1, r2;
scanf("%d %d", &r1, &r2);
armstrongrange(r1, r2);

return 0;
}
void armstrongrange(int r1 ,int r2){
    int nooffigits=0;
    int original, originalcopy, rem, sum=0, totalarm=0;
    for(int i=r1; i<=r2; i++){
        original=i;
        originalcopy=i;
        nooffigits=0;
        sum=0;
        while(original>0){
            original=original/10;
            nooffigits++;
        }
        while(originalcopy>0){
            rem=originalcopy%10;
            sum = pow(rem,nooffigits) + sum;
            originalcopy=originalcopy/10;
            }
        

        if(sum==i){
            printf("%d ",i);
            totalarm++;
        }

    }
  printf("\n%d", totalarm);
}