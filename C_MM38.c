#include<stdio.h>
int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if(a>=b&&a>=c){
            if(a>=b+c){
                printf("unfit\n");
            }
            else{
                printf("fit\n");
            }
        }
        else if(b>=a&&b>=c){
            if(b>=a+c){
                printf("unfit\n");
            }
            else{
                printf("fit\n");
            }
        }
        else if(c>=b&&c>=a){
            if(c>=a+b){
                printf("unfit\n");
            }
            else{
                printf("fit\n");
            }
        }
    }
    return 0;
}
