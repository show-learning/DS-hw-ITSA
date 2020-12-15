#include<stdio.h>

int main(){
    int dis,sec;
    float speed= 1 - 2.54 * 0.3;
    while(scanf("%d",&dis)!=EOF){
        sec=dis/speed;
        printf("%d\n",sec+1);
    }
    return 0;
}
