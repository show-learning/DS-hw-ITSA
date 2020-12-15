#include<stdio.h>
int main(){
    int x,y,ans=1;
    while(scanf("%d %d",&x,&y)!=EOF){
        for(int i=1;i<=x&&i<=y;i++){
            if(x%i==0&&y%i==0){
                ans=i;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
