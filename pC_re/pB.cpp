#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d; cin >> a >> b >> c >> d;
    double score = max(max(a,b),c) * 0.6 + d * 0.4;
    if (score > 60) {
        cout << "You passed.\n";
    } else if (score > 40) {
        cout << "You will be down.\n";
    } else {
        cout << "You will be stunned.\n";
    }
    return 0;
}