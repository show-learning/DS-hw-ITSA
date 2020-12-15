#include<stdio.h>
int main(){
    int sec,minu,hour,day,input;
    scanf("%d",&input);
    sec=input%60;
    input=input/60;
    minu=input%60;
    input=input/60;
    hour=input%24;
    input=input/24;
    day=input;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",day,hour,minu,sec);
    return 0;
}
