#include<stdio.h>

int main(){
    int n;
    int output[8]={0};
    while(scanf("%d",&n)!=EOF){
        if(n>=0){
            for(int i=0;i<7;i++){
                if((n%2)==1){
                    output[7-i]=1;
                }
                else{
                    output[7-i]=0;
                }
                n=n/2;
            }
            output[0]=0;
        }
        else{
            n=n+128;/*add 128 has the same result besides first words*/
            for(int i=0;i<7;i++){
                if((n%2)==1){
                    output[7-i]=1;
                }
                else{
                    output[7-i]=0;
                }
                n=n/2;
            }
            output[0]=1;
        }
        for(int i=0;i<8;i++){
            printf("%d",output[i]);
        }
        printf("\n");
    }
    return 0;
}
