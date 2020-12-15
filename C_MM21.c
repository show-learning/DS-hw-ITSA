#include<stdio.h>
int main(){
    int n;
    long long int out;
    while(scanf("%d",&n)!=EOF){
        out=1;
        for(int i=1;i<=n;i++){
            out=out*i;
        }
        printf("%lld\n",out);
    }
    return 0;
}
