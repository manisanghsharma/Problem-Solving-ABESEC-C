#include<stdio.h>
int main()
{

int n, rev=0;
scanf("%d", &n);
while(n>0){
    rev = rev*10+n%10;
    n=n/10;
}
while(rev>0){
    int remainder = rev%10;
    if (remainder==0){
        printf("zero ");
    }
    else if(remainder==1){
        printf("one ");
    }
    else if(remainder==2){
        printf("two ");
    }
    else if(remainder==3){
        printf("three ");
    }
    else if(remainder==4){
        printf("four ");
    }
    else if(remainder==5){
        printf("five ");
    }
    else if(remainder==6){
        printf("six ");
    }
    else if(remainder==7){
        printf("seven ");
    }
    else if(remainder==8){
        printf("eight ");
    }
    else if(remainder==9){
        printf("nine ");
    }
    rev=rev/10;
}
return 0;
}