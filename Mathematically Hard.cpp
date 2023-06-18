#include<bits/stdc++.h>
using namespace std;
vector<int>Prime;
int mark[10000007];
int phi[10000007];
int N=10000000;
void SievePhi()
{
    for(int i=1; i<=N; i++)
    {
        phi[i]=i;
    }
    mark[0]=mark[1]=1;
    Prime.push_back(2);
    phi[2]=1;
    for(int i=4; i<=N; i+=2)
    {
        mark[i]=1;
        phi[i]/=2;
    }
    for(int i=3; i<=N; i+=2)
    {
        if(mark[i]==0)
        {
            Prime.push_back(i);
            phi[i]=i-1;
            for(int j=i*2; j<=N; j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

int main()
{
    SievePhi();
    int a,b;
    scanf("%d",&N);
    for(int k=1; k<=N; k++)
    {
        int c=0;
        scanf("%d%d",&a,&b);
        for(int i=a; i<=b; i++)
        {
            c+=phi[i]*phi[i];
        }
        printf("Case %d: %d\n",k,c);
    }
    return 0;
}


