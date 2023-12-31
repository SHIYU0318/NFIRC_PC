#include <bits/stdc++.h>
#define ll long long

using namespace std;

ifstream ifs;
ofstream file;
string dir_name = "/Users/shiyu./Desktop/NFIRC/PC/pB/pB_in";//path

int fileId = 0;

void make_file() { // 建立檔案
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
    int a = randint() % 30 + 30;
    int b = randint() % 30 + 30;
    int c = randint() % 30 + 30;
    cout << a << " " << b << " " << c << " ";
    double m = max(max(a,b),c);
    double l = (40 - (m * 0.6)) / 0.4;
    double r = (60 - (m * 0.6)) / 0.4;
    int d = randint() % (int)(r-l-1) + l;
    cout << d << endl;
}

int main()
{
    int N = 5;
    while (N--) {
        make_file();
        int t = 1;
        while (t--)
            make();
        file.close();
    }
    return 0;
}
