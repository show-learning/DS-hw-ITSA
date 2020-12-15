#include<stdio.h>

int main(){
    int h1,m1,h2,m2;
    int total,temp;
    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);
    if(m2>=m1){
        temp=h2-h1;
        if(temp<2){
            total=30*2*temp;
            if((m2-m1)>=30){
                total=total+30;
            }
            printf("%d\n",total);
        }
        else if(temp<4){
            total=30*4;
            temp=temp-2;
            total=total+temp*40*2;
            if((m2-m1)>=30){
                total=total+40;
            }
            printf("%d\n",total);
        }
        else{
            total=30*4+40*4;
            temp=temp-4;
            total=total+60*2*temp;
            if((m2-m1)>=30){
                total=total+60;
            }
            printf("%d\n",total);
        }
    }
    else{
        temp=h2-h1;
        if(temp<2){
            total=30*2*temp;
            if((m1-m2)<30){
                total=total-30;
            }
            printf("%d\n",total);
        }
        else if(temp<4){
            total=30*4;
            temp=temp-2;
            total=total+temp*40*2;
            if((m1-m2)<30){
                total=total-40;
            }
            printf("%d\n",total);
        }
        else{
            total=30*4+40*4;
            temp=temp-4;
            total=total+60*2*temp;
            if((m1-m2)<30){
                total=total-60;
            }
            printf("%d\n",total);
        }
    }
    return 0;
}
