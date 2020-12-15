#include<stdio.h>
int main(){
    double x;
    while(scanf("%lf",&x)!=EOF){
        x=x/5 *9;
        x=x+32;
        printf("%.1f\n",x);
    }
    return 0;
}
