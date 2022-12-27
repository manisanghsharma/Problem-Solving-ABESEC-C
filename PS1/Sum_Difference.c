#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b;
    float c, d;
    
    scanf("%d %d %f %f", &a, &b, &c, &d);
    int absoluteint = 1;
    if ((a-b)<0){
        absoluteint = -1;
    }
    
    int absolutefloat = 1;
    if ((c-d)<0){
        absolutefloat = -1;
    }
    
    
    printf("%d %d", a+b, absoluteint*(a-b));
    printf("\n%0.1f %0.1f",c+d, absolutefloat*(c-d));
    return 0;
}
