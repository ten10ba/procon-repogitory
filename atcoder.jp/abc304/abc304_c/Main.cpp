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

int root(int x, vector<int>& pa){
    if(pa[x] == x) return x;
    return pa[x] = root(pa[x], pa);
}

void unite(int x, int y, vector<int>& pa) {
    int rx = root(x, pa);
    int ry = root(y, pa);
    if(rx == ry) return;
    pa[ry] = rx;
}

int main(){
    int n,d;
    cin >> n >> d;
    vector<pair<int,int>> xy(n);
    vector<int> pa(n);
    vector<vector<int>> din(n);
    for(int i = 0; i < n; ++i){
        cin >> xy[i].first >> xy[i].second;
        pa[i] = i;
    }

    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            double dis = sqrt((xy[i].first -xy[j].first) * (xy[i].first -xy[j].first) + (xy[i].second -xy[j].second) * (xy[i].second -xy[j].second));
            if(dis <= d){
                unite(i, j, pa);
            }
        }
    }

    for(int i = 0; i < n; ++i){
        if(root(i,pa) == root(0,pa)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    

    return 0;
}