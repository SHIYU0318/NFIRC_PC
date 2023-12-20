#include <bits/stdc++.h>
#define ll long long

using namespace std;

ifstream in;
ofstream out;
string indir = "/Users/shiyu./Desktop/NFIRC/PC/pB/pB_in"; //input path
string outdir = "/Users/shiyu./Desktop/NFIRC/PC/pB/pB_out";//output path
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


/************************************ solution space ************************************/

int main()
{
    int N = 19; // number of input data
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
