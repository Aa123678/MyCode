#include<stdio.h>
double getpower(int x,int y){
    int i;
    double sum=1;
        
    if(y<=0){
        for(i=1;i<=-y;i++){
        sum=sum*1.0/x;
        }}else{
            for(i=1;i<=y;i++){
        sum=sum*x;
        }
    }
    return sum;
}
int main(void)
{
    int x,y;
    while(scanf("%d,%d",&x,&y)!=EOF){
        if(x==0){
            break;
        }else{
        printf("%f\n",getpower(x,y));
    }}
    return 0;
}
