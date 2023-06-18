#include<bits/stdc++.h>
using namespace std;

int Prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

int main()
{
    int T,cnt=0;;
    scanf("%d",&T);
    for(int t=1; t<=T; t++)
    {
        int n;
        scanf("%d",&n);
        int A[101];
        memset(A, 0, sizeof(A));
        for(int k = 1; k <= n; k++)
        {
           int  x = k;
            for(int i=0 ; i<25&&Prime[i]*Prime[i]<=x; i++)
            {
                cnt = 0;
                while(x%Prime[i]==0)
                {
                    x/=Prime[i];
                    cnt++;
                }
                if(cnt>0)
                {
                    A[Prime[i]] += cnt;
                }
            }
            if(x>1){
                A[x] += 1;
            }
        }
        printf("Case %d: %d = ",t,n);
        int p = 0;
        for(int j=0;j<=n;j++)
        {
            if(A[j]>0)
            {
                if(p==1){
                    printf(" * ");
                }
                printf("%d (%d)",j,A[j]);
                p=1;
            }
        }
        printf("\n");
    }
}
