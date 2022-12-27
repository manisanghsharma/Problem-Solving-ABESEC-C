#include<stdio.h>
int main()
{

int m1,m2,m3,m4,m5, invalid=0;
scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
int totalmarks = m1+m2+m3+m4+m5;
if(m1<0 || m2<0 || m3<0 || m4<0 || m5<0 || m1>100 || m2>100 || m3>100 || m4>100 || m5>100){
    invalid=1;
}
if(invalid==0){
    float percentage;
    percentage = (totalmarks/500.0)*100;
    // printf("%.2f", percentage);
        
    if (percentage>=90){
        printf("A");
    }
    else if (percentage<90 && percentage>=80){
        printf("B");
    }
    else if (percentage<80 && percentage>=60){
        printf("C");
    }
    else if (percentage<60){
        printf("D");
    }}

else if (invalid==1){
    printf("Invalid Score");
}
return 0;
}