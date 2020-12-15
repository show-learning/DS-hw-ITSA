#include<stdio.h>
int main(){
    int n,temp,ans;
    while(scanf("%d",&n)!=EOF){
        temp=n%10;
        temp=temp*temp*temp;
        ans=temp;
        temp=n%100-n%10;
        temp=temp/10;
        temp=temp*temp*temp;
        ans=ans+temp;
        temp=n-n%100;
        temp=temp/100;
        temp=temp*temp*temp;
        ans=ans+temp;
        if(ans==n){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
