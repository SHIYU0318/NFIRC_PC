#include <bits/stdc++.h>
#define ll long long

using namespace std;

ifstream in;
ofstream out;
string indir = "/Users/shiyu./Desktop/NFIRC/PC/pE/pE_in"; //input path
string outdir = "/Users/shiyu./Desktop/NFIRC/PC/pE/pE_out";//output path
int fileId = 0;

void start() { // 建立檔案 
    while(1) {
        string filename;
        if (fileId < 10)
            filename += "0";
        filename += to_string(fileId);
        in.open(outdir + filename + ".out");
        fileId++;
        cerr << filename << endl;
        if (!in.is_open())
        {
            out.open(outdir + filename + ".out");
            in.open(indir + filename + ".in");
            break;
        }
        else
            in.close();
    }
}

#define MAKE 1
#define cin in
#if MAKE
#define cout out
#endif

/************************************ solution space ************************************/


#define ShiYu ios::sync_with_stdio(0),cin.tie(0)
#define FOR(i,n) for(int i=0; i<=n; ++i)

signed sol()
{
    ShiYu;
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


/************************************ solution space ************************************/

int main()
{
    int N = 20; // number of input data
    // cin >> n;
    while (N--)
    {
        start();
        int t = 1;

        while (t--)
            sol();
        out.close();
        in.close();
    }
    return 0;
}
