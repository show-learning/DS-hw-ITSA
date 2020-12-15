#include<stdio.h>
int main(){
    int x,y,dis;
    while(scanf("%d %d",&x,&y)!=EOF){
        dis=x*x+y*y;
        if(dis<=10000){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
    return 0;
}
