#include<stdio.h>
int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF){
        x=x+y;
        printf("%d\n",x*x);
    }
    return 0;
}
