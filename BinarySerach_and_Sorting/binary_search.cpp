#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int n = 10; // array size
    int x = 50; // finding value

    int lo = 0, hi = n-1;

    while(lo<hi)
    {
        int md = (lo + hi)/2;
        if(a[md]==x)
        {
            cout << md << endl;
            break;
        }
        if(a[md]>x) hi = md-1;
        else if(a[md]<x) lo = md+1;
    }

}
