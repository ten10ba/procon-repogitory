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
    int h,w;
    cin >> h >> w;
    vector<vector<int>> x(h,vector<int>(w));
    vector<vector<int>> sum(h + 1,vector<int>(w + 1,0));
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            cin >> x[i][j];
            sum[i + 1][j + 1] = sum[i][j + 1] + sum[i + 1][j] - sum[i][j] + x[i][j];
        }
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ans = sum[c][d] - sum[a - 1][d] - sum[c][b - 1] + sum[a - 1][b - 1];
        cout << ans << endl;
    }
    return 0;
}