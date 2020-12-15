#include<stdio.h>
int main(){
    double x,ans;
    while(scanf("%lf",&x)!=EOF){
        ans=x*x;
        ans=ans*10+0.5;
        ans=ans/10;
        printf("%.1f\n",ans);
    }
    return 0;
}
