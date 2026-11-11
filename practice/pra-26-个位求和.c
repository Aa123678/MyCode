#include<stdio.h>
int main()
{
    int m,n,a=0,b=0;
    scanf("%d %d",&m,&n);
    for(;m<=n;m++){
       if(m<0){
      a=a-m%10;
       }else{
            b=b+m%10;
       }
    }
printf("%d",b+a);
return 0;
}