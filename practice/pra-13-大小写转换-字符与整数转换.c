#include<stdio.h>
int main()
{
    char ch='A';
    printf("ch=%c,ASCLL=%d\n",ch,ch);

    int lower=ch+('a'-'A');
    printf("%c\n",lower);

    char digit='7';
    int value=digit-'0';
    printf("%d\n",value);
    return 0;


}