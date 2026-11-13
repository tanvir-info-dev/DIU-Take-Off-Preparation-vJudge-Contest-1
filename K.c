#include <stdio.h>
int main()
{
    int T,t1,t2,f,a,ct1,ct2,ct3,avg=0,total;
    scanf("%d",&T);
    int i;
    for(i=1 ; i<=T ; i++){
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
        if(ct1>=ct2 && ct1>=ct3){
            if(ct2>=ct3){
                avg=(ct1+ct2)/2;
            }
            else{
                avg=(ct1+ct3)/2;
            }
        }
        else if(ct2>=ct1 && ct2>=ct3){
            if(ct1>=ct3){
                avg=(ct1+ct2)/2;
            }
            else{
                avg=(ct3+ct2)/2;
            }
        }
        else if(ct3>=ct1 && ct3>=ct2){
            if(ct1>=ct2){
                avg=(ct1+ct3)/2;
            }
            else{
                avg=(ct2+ct3)/2;
            }
        }
        total=t1+t2+f+a+avg;
        if(total>=90){
            printf("A\n");
        }
        else if(total>=80){
            printf("B\n");
        }
        else if(total>=70){
            printf("C\n");
        }
        else if(total>=60){
            printf("D\n");
        }
        else{
            printf("F\n");
        }
    }

    return 0;
}
