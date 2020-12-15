#include<stdio.h>
#include<string.h>
int main(){
    int n,len;
    char output[10];
    for(int i=0;i<10;i++){
        output[i]='\0';
    }
    while(scanf("%d",&n)!=EOF){
        while(n>0){
            if(n%16==0){
                strcat(output,"0");
            }
            else if(n%16==1){
                strcat(output,"1");
            }
            else if(n%16==2){
                strcat(output,"2");
            }else if(n%16==3){
                strcat(output,"3");
            }else if(n%16==4){
                strcat(output,"4");
            }else if(n%16==5){
                strcat(output,"5");
            }else if(n%16==6){
                strcat(output,"6");
            }else if(n%16==7){
                strcat(output,"7");
            }else if(n%16==8){
                strcat(output,"8");
            }else if(n%16==9){
                strcat(output,"9");
            }else if(n%16==10){
                strcat(output,"A");
            }else if(n%16==11){
                strcat(output,"B");
            }else if(n%16==12){
                strcat(output,"C");
            }else if(n%16==13){
                strcat(output,"D");
            }else if(n%16==14){
                strcat(output,"E");
            }else if(n%16==15){
                strcat(output,"F");
            }
            n=n/16;
        }

        len=strlen(output);
        for(int i=0;i<len;i++){
            printf("%c",output[len-i-1]);
        }
        printf("\n");
         for(int i=0;i<len;i++){
            output[i]='\0';
        }
    }
    return 0;
}
