#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=2;i<n;i++){
            if(n%i==0){
                printf("NO\n");
                break;
            }
            if(i+1==n){
                printf("YES\n");
            }
        }
    }
    return 0;
}
