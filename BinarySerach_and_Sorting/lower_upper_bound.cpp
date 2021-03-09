#include<bits/stdc++.h>
using namespace std;


//lower bound
// first index where if we put value then array will be sorted
int mainLowerbound ()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int n = 10; // array size
    int x = 40; // finding value

    int lo = 0, hi = n-1;

    while(lo<hi)
    {
        int md = (lo + hi)/2;
        if(a[md]>=x) hi = md;
        else if(a[md]<x) lo = md+1;
    }
    cout << lo << endl; // output -> 3

}



// upper bound
// last index where if we put value then array will be sorted
int mainUpperbound ()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int n = 10; // array size
    int x = 50; // finding value

    int lo = 0, hi = n-1;

    while(lo<hi)
    {
        int md = (lo + hi)/2;
        if(a[md]>x) hi = md;
        else if(a[md]<=x) lo = md+1;
    }
    cout << lo << endl; // output -> 5

}



// library function
// it = lb||up (array ,array+n , value ) - array

int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int n = 10; // array size
    int x = 50; // finding value
    auto lb = lower_bound(a,a+n,x)-a;
    auto ub = upper_bound(a,a+n,x)-a;
    cout << lb << " " << ub << " " << endl;
}

