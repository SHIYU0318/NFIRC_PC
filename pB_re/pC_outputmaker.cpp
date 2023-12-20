#include <bits/stdc++.h>
#define ll long long

using namespace std;

ifstream in;
ofstream out;
string indir = "/Users/shiyu./Desktop/NFIRC/PC/pC/pC_in"; //input path
string outdir = "/Users/shiyu./Desktop/NFIRC/PC/pC/pC_out";//output path
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


int sol()
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


/************************************ solution space ************************************/

int main()
{
    int N = 20; // number of input data
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
