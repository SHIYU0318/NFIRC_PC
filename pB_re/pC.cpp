#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,ans;
    int cnt = 0;
    while(getline(cin,s))
    {
        ans += s[0];
        cnt += s.size();
    }
    cout << cnt << "\n" << ans << "\n";
}