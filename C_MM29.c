#include<stdio.h>
int main(){
    int n,judge;
    while(scanf("%d",&n)!=EOF){
        for(int i=n-1;i>1;i--){
            judge=1;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    judge=0;
                    break;
                }
            }
            if(judge==1){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
