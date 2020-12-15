#include<stdio.h>
int main(){
    int x;
    while(scanf("%d",&x)!=EOF){
        if(x>31){
            printf("Value of more than 31\n");
        }
        else{
            x= 1 << x;
            printf("%d\n",x);
        }

    }
    return 0;
}
