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
    int x1 = w, x2 = 1, y1 = h, y2 = 1;
    vector<vector<char>> s(h,vector<char>(w));
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            char c;
            cin >> c;
            s[i][j] = c;
            if(c == '#'){
                if(x1 > j + 1) x1 = j + 1;
                if(x2 < j + 1) x2 = j + 1;
                if(y1 > i + 1) y1 = i + 1;
                if(y2 < i + 1) y2 = i + 1;
            }
        }
    }

    for(int i = y1 - 1; i < y2; ++i){
        for(int j = x1 - 1; j < x2; ++j){
            if(s[i][j] == '.'){
                cout << i + 1 << ' ' << j + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
