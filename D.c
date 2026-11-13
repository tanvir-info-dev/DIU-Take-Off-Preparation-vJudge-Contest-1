#include <stdio.h>
int main()
{
    int N,G=0;
    scanf("%d",&N);
    int F[]={0};
    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j<=N ; j++){
            if(i%j==0){
                F[i]=F[i]+j;
            }
        }
        G=G+F[i];
    }
    printf("%d",G);

    return 0;
}