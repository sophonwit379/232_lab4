#include<stdio.h>
#include<string.h>
int main()
{
    int j,i,n,cup[4]={1,0,0,0},tmp[4]={0,0,0,0},t,t2,k;
    scanf("%d",&n);
    char w[n][50];
    for(i=0;i<n;i++)
    {
        scanf("%s",w);
        for(j=0;j<strlen(w[i]);j++)
        {
            switch(w[i][j])
            {
                case 'A':
                    t=cup[2];
                    cup[2]=tmp[1];
                    tmp[1]=t;
                    break;
                case 'B':
                    t=cup[0];
                    cup[0]=tmp[3];
                    tmp[3]=t;
                    break;
                case 'C':
                    t=cup[0];
                    t2=cup[1];
                    cup[0]=tmp[2];
                    cup[1]=tmp[3];
                    tmp[2]=t;
                    tmp[3]=t2;
                    break;
                case 'D':
                    t=cup[0];
                    t2=cup[2];
                    cup[0]=tmp[1];
                    cup[2]=tmp[3];
                    tmp[1]=t;
                    tmp[3]=t2;
                    break;
                case 'E':
                    t=cup[0];
                    t2=cup[1];
                    cup[0]=tmp[3];
                    cup[1]=tmp[2];
                    tmp[3]=t;
                    tmp[2]=t2;
                    break;
            }
            for(k=0;k<4;k++)
            {
                if(cup[i]==1)
                    printf("%d",cup[i]);
            }
        }
    }






}
