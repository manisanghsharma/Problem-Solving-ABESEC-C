#include<stdio.h>
#include<math.h>

int isArm(int n){
    int ori=n, noofdigits=0, sum=0, armcheck=n;
    while(ori>0){
        noofdigits++;
        ori=ori/10;
    }
    
    while(n>0){
        sum = sum + pow(n%10,noofdigits);
        n=n/10;
    }

    if(armcheck==sum){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{

int lower_limit, upper_limit, noofarm=0;
scanf("%d%d", &lower_limit, &upper_limit);

for(int i=lower_limit; i<=upper_limit; i++){
    if(isArm(i)==1){
        noofarm++;
        printf("%d ", i);
    }
}

printf("\n%d", noofarm);
    
return 0;
}
