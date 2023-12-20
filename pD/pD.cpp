#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,s; cin >> m >> n >> s;
    bool b[40] = {false};
    b[s-1] = true;
    while(n--)
    {
        int t; cin >> t;
        b[t-1] = true;
    }
    for(int i = 1; i <= m; i++)
    {
        if(!b[i-1]) cout << i << " ";
    }
    cout << "\n";
}