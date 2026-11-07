#include<stdio.h>
#include<string.h>
int main()
{
    char line[100];
    printf("请输入一句话：");
    if(fgets(line,sizeof(line),stdin) == NULL){
    printf("读取失败\n");
    return 1;
    }
    size_t len=strlen(line);
    if(len>0&&line[len-1]=='\n'){
        line[len-1]='\0';
    }
    printf("你输入的是[%s]\n",line);
    return 0;
}