#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++){
            if(i%5==0&&i%7==0){
                printf("%d",i);
                if(i+35<=n){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
