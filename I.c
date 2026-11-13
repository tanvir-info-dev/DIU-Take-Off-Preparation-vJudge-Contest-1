#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%lf",&a[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(a[i]<=2.5){
            printf("%d %.2lf",i+1,a[i]);
            break;
        }
        else if(i==n-1){
            printf("Not Found\n");
        }
    }

    return 0;
}