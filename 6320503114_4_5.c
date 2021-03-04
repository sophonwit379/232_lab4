#include<stdio.h>
#include<string.h>
int main()
{
    int j,i,n,cup[4]={1,0,0,0},t,t2,k;
    scanf("%d",&n);
    char w[n][50];
    for(i=0;i<n;i++)
    {
        scanf("%s",w[i]);
        for(j=0;j<strlen(w[i]);j++)
        {
            switch(w[i][j])
            {
                case 'A':
                    t=cup[2];
                    cup[2]=cup[1];
                    cup[1]=t;
                    break;
                case 'B':
                    t=cup[0];
                    cup[0]=cup[3];
                    cup[3]=t;
                    break;
                case 'C':
                    t=cup[0];
                    t2=cup[1];
                    cup[0]=cup[2];
                    cup[1]=cup[3];
                    cup[2]=t;
                    cup[3]=t2;
                    break;
                case 'D':
                    t=cup[0];
                    t2=cup[2];
                    cup[0]=cup[1];
                    cup[2]=cup[3];
                    cup[1]=t;
                    cup[3]=t2;
                    break;
                case 'E':
                    t=cup[0];
                    t2=cup[1];
                    cup[0]=cup[3];
                    cup[1]=cup[2];
                    cup[3]=t;
                    cup[2]=t2;
                    break;
            }
        }
        for(k=0;k<4;k++)
        {
            if(cup[k]==1)
                printf("%d\n",k+1);
        }
    }

}
