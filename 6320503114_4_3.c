#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char word[200],tmp[200];
    scanf("%s",word);
    for(i=0;i<strlen(word);i++)
    {
        tmp[i]=word[i+1];
        if(word[i]!=tmp[i])
            printf("%c",word[i]);
    }

}
