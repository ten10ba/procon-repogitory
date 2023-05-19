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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> l(q);
    vector<int> r(q);
    vector<int> sum(n + 1);
    sum[0] = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
    }
    for(int i = 0; i < q; ++i){
        cin >> l[i] >> r[i];
        cout << sum[r[i]] - sum[l[i] - 1] << endl;
    }

    return 0;
}