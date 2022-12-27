#include<stdio.h>
int main()
{

char a;
scanf("%c", &a);

if (a>=97 && a<=122){             // ASCII values for lowercase & uppercase
    printf("Lowercase");
}

else if (a>=65 && a<=90){
    printf("Uppercase");}

else if (a>=48 && a<=57){
    printf("Number");}

else {
    printf("SpecialCharacter");
}

return 0;
}