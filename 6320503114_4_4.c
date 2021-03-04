#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char sen[1000],s[2]=" ",show;
    char *tmp;
    gets(sen);
    tmp=strtok(sen,s);
    while(tmp!=NULL)
    {

      tmp=strtok(NULL,s);
    }






}
