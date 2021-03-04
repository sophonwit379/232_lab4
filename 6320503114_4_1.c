#include<stdio.h>
int main()
{
    int a,b,c,max=0,min=1000,s1,s2;
    scanf("%d",&a);
    int n1[a][3],n2[a-2];
    for(b=0; b<a; b++)
    {
        scanf("%d %d %d",&n1[b][0],&n1[b][1],&n1[b][2]);
    }
    for(c=0; c<a-2; c++)
    {
        n2[c]=n1[c][0]*4+n1[c][1]*2+n1[c][2]
             +n1[c+1][0]*4+n1[c+1][1]*2+n1[c+1][2]
             +n1[c+2][0]*4+n1[c+2][1]*2+n1[c+2][2];
        if(n2[c]>max)
        {
            max=n2[c];
            s1=c;
        }
        if(n2[c]<min)
        {
            min=n2[c];
            s2=c;
        }
    }
    printf("%d %d",s1+1,s2+1);

}
