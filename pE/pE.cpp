#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m; cin >> m;
    long long ans = 0;
    for(int i=0; i <= m / 50; i++)
    {
        for(int j=0; j <= (m - i*50) / 10; j++)
        {
            ans += (m - i*50 - j*10) / 5 + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}