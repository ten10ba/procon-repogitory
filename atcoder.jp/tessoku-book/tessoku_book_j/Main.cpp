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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> max_a(n);
    vector<int> max_rev(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i == 0) max_a[i] = a[i];
        else max_a[i] = max(a[i],max_a[i - 1]);
    }
     for(int i = n - 1; i >= 0; --i){
        if(i == n - 1) max_rev[i] = a[i];
        else max_rev[i] = max(a[i],max_rev[i + 1]);
    }
    int d;
    cin >> d;
    vector<int> x(n,0);
    for(int i = 0; i < d; ++i){
        int l,r;
        cin >> l >> r;
        cout << max(max_a[l - 2], max_rev[r]) << endl;
    }
}
