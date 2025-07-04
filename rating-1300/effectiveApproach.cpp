#include<bits/stdc++.h>
using namespace std;
void effectiveApproach(int n, vector<int>&v1, int m, vector<int>&v2)
{
    unordered_map<int,int>pos;
    for(int i=0; i<n; i++)
    {
        pos[v1[i]]=i;
    }
    long long forward=0, reverse=0;
    for(int i=0; i<m; i++)
    {
        int index=pos[v2[i]];
        forward+=index+1;
        reverse+=n-index;
    }
    cout << forward << " " << reverse << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v1(n);
    for(int i=0; i<n; i++)
    {
        cin >> v1[i];
    }

    int m;
    cin >> m;
    vector<int>v2(m);
    for(int i=0; i<m; i++)
    {
        cin >> v2[i];
    }
    effectiveApproach(n,v1,m,v2);
    return 0;
}