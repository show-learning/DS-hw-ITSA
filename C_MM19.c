#include<stdio.h>

int main(){
    int n;
    float ans;
    while(scanf("%d",&n)!=EOF){
        ans=n*0.9;
        if(n<=800){
            printf("%.1f\n",ans);
        }
        else if(n>=1500){
            ans=ans*0.79;
            printf("%.1f\n",ans);
        }
        else {
            ans=ans*0.9;
            printf("%.1f\n",ans);
        }
    }
    return 0;
}
