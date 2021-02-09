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
const double pi=3.141592653589793238;

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> cond(m);
    for(int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        cond[i] = make_pair(a,b);
    }
    int k;
    cin >> k;
    vector<pair<int,int>> dish(k);
    for(int i = 0; i < k; i++){
        int c,d;
        cin >> c >> d;
        dish[i] = make_pair(c,d);
    }
    int ans = 0;
    for(int bit = 0; bit < 1 << k; bit++) {
        int count = 0;
        vector<bool> ball(n);
        for(int i = 0; i < k; i++) {
            int c,d;
            c = dish[i].first;
            d = dish[i].second;
            ball[bit & (1 << i) ? c : d] = 1;
        }
        for(int i = 0; i < m; i++) {
            int a,b;
            a = cond[i].first;
            b = cond[i].second;
            if(ball[a] && ball[b]) count ++;
        }
        if(count > ans) ans = count;
    }
    cout << ans << endl;
}