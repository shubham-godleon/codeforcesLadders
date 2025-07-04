#include<bits/stdc++.h>
using namespace std;
int arrivalOfGeneral(int n, vector<int>&v)
{
    int count=0;
    int x=0;
    int maxi=v[0];
    for(int i=0; i<n; i++)
    {
        if(maxi<v[i])           // to mark the most left maxi which is 10 10 58 31 63 40 (76) 76
        {
            maxi=v[i];            
            x=i;
            //cout << x << endl;
        }
       // cout << x << endl;
    }
    count=x;
    int mini=v[0];
    int y=0;
    for(int i=0; i<n; i++)
    {
        if(mini>=v[i])      // to mark the most right mini 
                            // 10 (10) 58 31 63 40 76
        {
            mini=v[i];
            y=i;
        }
    }
    count+=(n-1)-y;
    if(x>y) count-=1;
    return count;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    cout << arrivalOfGeneral(n,v) << endl;
    return 0;
}