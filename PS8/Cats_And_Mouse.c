#include<stdio.h>
#include<math.h>
int main()
{
int x,y,z;
int n;
scanf("%d",&n);
int arr[n][3];
for(int i=0; i<n ; i++){
    for(int j=0; j<3; j++){
    scanf("%d", &arr[i][j]);
    }
}

int j;
for(int i=0; i<n; i++){
        j=0;
        x=arr[i][j];
        y=arr[i][j+1];
        z=arr[i][j+2];

        if(fabs(x-z)<fabs(y-z)){
            printf("Cat A\n");
        }
        else if(fabs(x-z)>fabs(y-z)){
            printf("Cat B\n");
        }
        else if(fabs(x-z)==fabs(y-z)){
            printf("Mouse C\n");
        }

}

return 0;
}