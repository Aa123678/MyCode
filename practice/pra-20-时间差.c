#include<stdio.h>
int main()
{
    int h1,m1,s1;
    int h2,m2,s2; 
    int t=0;
    
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    if(h1*3600+m1*60+s1>=h2*3600+m2*60+s2){
        scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%d:%d:%d",&h2,&m2,&s2);
        return 1;
    }
    t=(h2-h1)*3600+(m2-m1)*60+(s2-s1);
   printf("%02d:%02d:%02d\n",t/3600,t%3600/60,t%60);
   return 0;
}