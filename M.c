#include <stdio.h>
#include <string.h>
int main()
{
    int T,N,count=0;
    char s[101];
    char a[101]="cakewalk";
    char b[101]="simple";
    char c[101]="easy";
    char d[101]="easy-medium";
    char e[101]="medium";
    char f[101]="medium-hard";
    char g[101]="hard";
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++){
        scanf("%d",&N);
        for(int j=1 ; j<=N ; j++){
            scanf("%s",&s);
            if(strcmp(s,a)==0){
                count++;
            }
            else if(strcmp(s,b)==0){
                count++;
            }
            else if(strcmp(s,c)==0){
                count++;
            }
            else if(strcmp(s,d)==0){
                count++;
            }
            else if(strcmp(s,e)==0){
                count++;
            }
            else if(strcmp(s,f)==0){
                count++;
            }
            else if(strcmp(s,g)==0){
                count++;
            }

        }
        if(count==N){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}