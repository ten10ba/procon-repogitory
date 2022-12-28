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
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> p[i] >> a[i];
    }
    vector< vector<int> > dp(n, vector<int> (n));
    dp[0][n - 1] = 0;
    for(int i = n - 2; i >= 0; --i){
        for(int j = 0; j <= n - 1 - i; ++j){
            int l = j, r = j + i;
            int al = 0, ar = 0;
            int dpl = -1, dpr = -1;
            if(l != 0){
                if(l <= (p[l - 1] - 1) && (p[l - 1] - 1) <= r) al = a[l - 1];
                dpl = dp[l - 1][r] + al;
            }
            if(r != n - 1){
                if(l <= (p[r + 1] - 1) && (p[r + 1] - 1) <= r) ar = a[r + 1];
                dpr = dp[l][r + 1] + ar;
            }
            dp[l][r] = max(dpl,dpr);
            //cout << "dp" << i << j << "=" << dp[l][r] << endl;
        }
    }
    int ans = -1;
    for(int i = 0; i < n; ++i){
        ans = max(ans, dp[i][i]);
    }
    cout << ans << endl;
    return 0;
}