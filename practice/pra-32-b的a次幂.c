#include<stdio.h>
long long pow(int a, int b){
    int i;
    long long sum=1;
    for(i=1;i<=b;i++){
        sum=sum*a;
    }
    return sum;
}
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(b==-1){
            break;
        }
        printf("%lld\n",pow(a,b));
    }
    return 0;
}