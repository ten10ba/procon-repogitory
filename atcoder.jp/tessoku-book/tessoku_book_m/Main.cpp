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
    long long k;
    cin >> n >> k;
    long long ans = 0;
    vector<long long> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int ind = 0;
    for(int i = 0; i < n; ++i){
        while(a[ind + 1] <= a[i] + k && ind < n - 1){
            ind++;
        }
        ans += ind - i;
    }
    cout << ans << endl;

    return 0;
}