#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int t;
        scanf("%d",&t);
        if(t<21)
        {
            if(t<=10)
            {
                if(t%2!=0)
                {
                    a=0;
                    b=t;
                    printf("%d %d\n",abs(a),abs(b));
                }
                else
                {
                    a=t/2;
                    b=t-a;
                    printf("%d %d\n",abs(a),abs(b));
                }
            }
            else if(t>10)
            {
                a=t/2;
                b=t-a;
                printf("%d %d\n",abs(a),abs(b));
            }
        }
    }
    return 0;
}
