#include <stdio.h>
#include <math.h>
int main()
{
    int X,N,T;
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++){
        scanf("%d%d",&N,&X);
        if(X>=N){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}