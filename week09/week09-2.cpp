#include <stdio.h>
int grade[10]={9,8,1,2,3,7,6,4,5,0};
int main()
{
    int N=10;
    for(int k=0;k<N-1;k++)
    {
        int change=0;
        for(int i=0;i<N-1;i++)
        {
            if(grade[i]<grade[i+1])
            {
                int t=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=t;
                change++;
            }
        }
        if(change==0)break;
        for(int i=0;i<N;i++)printf("%d ",grade[i]);
        printf("\n");
    }
}
