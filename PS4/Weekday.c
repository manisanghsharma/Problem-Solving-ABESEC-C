#include<stdio.h>
#include<math.h>
int main()
{
int year, month, date;
int leapyear, invalid=1;
scanf("%d %d %d", &date, &month, &year);
if (year%4==0){  
    if(year%100==0 && year%400==0){
        leapyear=1;
    }
    else if (year%100==0 && year%400!=0){
        leapyear=0;
    }
    else{
        leapyear=1;
    }
}
else if(year%4!=0){
    leapyear=0;
}

if (month>0 && month<=12){
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
    || month == 10 || month == 12 ){
        if (date>=1 && date<=31){
        invalid = 0;}
    }
    if(month == 4 || month == 6 || month == 9 || month == 11){
        if (date>=1 && date<=30){
        invalid = 0;}}

    if(month == 2){
        if (leapyear==1){
            if(date>=1 && date<=29){
                invalid = 0;
            }}

        else if (leapyear==0){
            if(date>=1 && date<=28){
                invalid = 0;
            }}}
        
    }
    
if(invalid == 1){
   printf("Incorrect Date");
}
else if(invalid==0){ 
int d    = date  ; 
int m    = month  ; 
int y    = year ;  

int weekday  = (d += m < 3 ? y-- : y - 2, 23*m/9 + d + 4 + y/4- y/100 + y/400)%7; 

if (weekday==0){printf("Sunday");}
if (weekday==1){printf("Monday");}
if (weekday==2){printf("Tuesday");}
if (weekday==3){printf("Wednesday");}
if (weekday==4){printf("Thursday");}
if (weekday==5){printf("Friday");}
if (weekday==6){printf("Saturday");}

}
return 0;
}