#include<stdio.h>
int main()
{
int n, m;
scanf("%d %d", &n, &m);
int biggerno, smallerno;
if(n>m){
    biggerno=n;
    smallerno=m;
}
else{
    biggerno=m;
    smallerno=n;
}
if (smallerno!=0){
int remainder,temp;
while(remainder>=0){
    
    remainder = biggerno%smallerno;
    if(remainder==0||remainder==1){
        break;
    }
    temp=remainder;
    biggerno=smallerno;
    smallerno=temp;}
    
if(remainder==0){printf("%d", smallerno);}
else if(remainder==1){printf("1");}
}

else if(smallerno==0){
    printf("%d", biggerno);
}
return 0;
}