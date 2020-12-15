#include<stdio.h>
int main(){
    int h,s;
    double ans;
    while(scanf("%d %d",&h,&s)!=EOF){
        if(h<=60){
            ans=h*s;
        }
        else if(h<=120){
            ans=60*s+(h-60)*s*1.33;
        }
        else{
            ans=60*s+60*s*1.33+(h-120)*1.66*s;
        }
        printf("%.1f\n",ans);
    }
    return 0;
}
