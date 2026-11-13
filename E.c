#include <stdio.h>
int main()
{
    int n,r,p,count=0,sum=0;
    scanf("%d",&n);
    p=n;
    for(int i=1 ; n!=0 ; i++){
        r=n%10;
        n=(int)n/10;
        sum=sum+r;
        count=count+1;
    }
    if(p<0){
        if(count%2==0){
            printf("%d",-sum);
        }
        else{
            printf("%d",sum);
        }
    }
    else{
        printf("%d",sum);
    }

    return 0;
}