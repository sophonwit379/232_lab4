#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i=0;
    char sen[1000];
    scanf("%[^\n]",sen);
    char* tmp=strtok(sen," ");
    while(tmp!=NULL)
    {
        if(i==0)
        {
            printf("%c",toupper(tmp[0]));
        }
        else
        {

            if(strcmp(tmp,"i")!=0&&strcmp(tmp,"of")!=0&&strcmp(tmp,"the")!=0&&strcmp(tmp,"on")!=0&&strcmp(tmp,"at")!=0&&strcmp(tmp,"for")!=0
                &&strcmp(tmp,"with")!=0&&strcmp(tmp,"a")!=0&&strcmp(tmp,"an")!=0&&strcmp(tmp,"in")!=0&&strcmp(tmp,"and")!=0)
            {
                printf("%c",toupper(tmp[0]));
            }
        }
        i=1;
        tmp=strtok(NULL," ");
    }

}
