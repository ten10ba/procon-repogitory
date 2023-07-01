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
    int n,m;
    cin >> n >> m;
    vector<string> c(n);
    vector<string> d(m);
    vector<int> p(m + 1);
    for(int i = 0; i < n; ++i) cin >> c[i];
    for(int i = 0; i < m; ++i) cin >> d[i];
    for(int i = 0; i < m + 1; ++i) cin >> p[i];
    long long ans = 0;
    for(int i = 0; i < n; ++i){
        bool ex = 0;
        for(int j = 0; j < m; ++j){
            if(c[i] == d[j]){
                ex = 1;
                ans += p[j + 1];
            }
        }
        if(ex == 0) ans += p[0];
    }

    cout << ans << endl;
    return 0;
}
