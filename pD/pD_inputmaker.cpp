#include <bits/stdc++.h>
#define ll long long

using namespace std;

ifstream ifs;
ofstream file;
string dir_name = "/Users/shiyu./Desktop/NFIRC/PC/pD/pD_in";//path

int fileId = 0;

void make_file() { // 建立檔案
    int sum = 0, cnt = 0;
    while (1) {
        string filename;
        if (fileId < 10) 
            filename += "0";
        filename += to_string(fileId);
        cerr << filename << endl;
        ifs.open(dir_name + filename + ".in");
        if (!ifs.is_open()) {
            file.open(dir_name + filename + ".in");
            fileId++;
            break;
        }
        
        ifs.close();
        fileId++;
    }
}
random_device rd;
auto tt = chrono::high_resolution_clock::now();
std::mt19937_64 gen = std::mt19937_64(tt.time_since_epoch().count());
std::uniform_int_distribution<> dis_int(1, 2000000000);
auto randint = bind(dis_int, gen);

std::uniform_real_distribution<> dis_float(0, 1);
auto randfloat = bind(dis_float, gen);


#define MAKE 1
#if MAKE
#define cout file
#endif

void make() {
    int m = randint() % 21 + 20;
    int n = randint() % (m-2) + 1;
    int s = randint() % m + 1;
    cout << m << " " << n << " " << s << "\n";
    bool b[40] = {false};
    b[s-1] = true;
    while(n--)
    {
        bool c = false;
        int a;
        while(!c)
        {
            a = randint() % m + 1;
            if(!b[a-1])
            {
                b[a-1] = true;
                c = true;
            }
        }
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    int N = 20;
    while (N--) {
        make_file();
        int t = 1;
        while (t--)
            make();
        file.close();
    }
    return 0;
}
