#include<stdio.h>
int main()
{
int m,n;
int a=0,b=0;
while(scanf("%d %d",&m,&n)!=EOF){
    for(;m<=n;m++){
        if(m%2==0){
            a=a+m*m;
            }else{
                b=b+m*m*m;
        }
    }
    printf("%d %d\n",a,b);
    a=0;
    b=0;
}
  return 0;
}