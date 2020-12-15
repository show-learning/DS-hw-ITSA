#include<stdio.h>
int main(){
    int n,ans;
    while(scanf("%d",&n)!=EOF){
        ans=0;
        for(int i=1;i<=n;i++){
            if(i%3==0){
                ans=ans+i;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
