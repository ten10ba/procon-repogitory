//(・ω・)
#include <stdio.h>
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, atoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
#include <iomanip> //setprecision
#include <limits>
#include <sstream> //istringstream
#include <stdlib.h>
#include <list>
#include <iterator>//std::advance()
using namespace std;

int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<int>> z(h + 1,vector<int>(w + 1,0));
    vector<vector<int>> henka(h,vector<int>(w,0));
    for(int i = 0; i < n; ++i){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        henka[a - 1][b - 1] += 1;
        if(c != h){
            henka[c][b - 1] -= 1;
        }
        if(d != w){
            henka[a - 1][d] -= 1;
        }
        if(c != h && d != w){
            henka[c][d] += 1;
        }
    }
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            z[i + 1][j + 1] = z[i][j + 1] + henka[i][j];
        }
    }
    for(int i = 0; i < w; ++i){
        for(int j = 0; j < h; ++j){
            z[j + 1][i + 1] += z[j + 1][i];
        }
    }
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            cout << z[i + 1][j + 1] << " ";
        }
        cout << endl;
    }
    return 0;
}