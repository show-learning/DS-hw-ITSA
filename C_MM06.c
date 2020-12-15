#include<stdio.h>
int main(){
    int input;
    double km;
    while(scanf("%d",&input)!=EOF){
        km=input*1.6;
        printf("%.1f\n",km);
    }
    return 0;
}
