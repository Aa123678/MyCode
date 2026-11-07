#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two figure:\n");
    scanf("%d %d",&a,&b);
    int max=(a>b)?a:b;
    int x;
    printf("Enter figure:\n");
    scanf("%d",&x);
    int abs_x=(x>0)?x:-x;
    printf("max=%d,abs_x=%d\n",max,abs_x);
    return 0;
}