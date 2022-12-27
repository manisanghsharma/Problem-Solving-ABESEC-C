#include<stdio.h>
int main()
{
int n1,n2;
char op;
scanf("%d %d %c", &n1, &n2, &op);
if(op==43){
    printf("%d", n1+n2);
}
else if(op==45){
    printf("%d", n1-n2);
}
else if(op==42){
    printf("%d", n1*n2);
}
else if(op==47){
    printf("%d", n1/n2);
}
else if(op==37){
    printf("%d", n1%n2);
}
else{
    printf("Invalid Choice");
}
return 0;
}