
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
int a[mx];
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        printf("Case %d:\n",i);
        while(m--)
        {
            int x,y;
            scanf("%d %d" ,&x ,&y);
            int it = lower_bound(a,a+n,x)-a;
            int it1 = upper_bound(a,a+n,y)-a;
            printf("%d\n",it1-it);

        }

    }
}
