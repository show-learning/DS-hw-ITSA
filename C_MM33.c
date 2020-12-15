#include<stdio.h>
int main(){
    int n,temp=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        temp = 0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                temp=temp+j;
            }
        }
        if(temp==i){
            if(i!=6){
                printf(" ");
            }
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;

}
