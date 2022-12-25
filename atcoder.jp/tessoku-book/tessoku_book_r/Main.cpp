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
    int n,s;
    cin >> n >> s;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >>  a[i];
    vector< vector<bool> > dp(n + 1, vector<bool>(s + 1, false));
    dp[0][0] = true;
    for(int i = 1; i <= n; ++i){
        for(int j = 0; j <= s; ++j){
            if(a[i - 1] > j){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = (dp[i - 1][j] || dp[i - 1][j - a[i - 1]]);
            }
        }
    }
   
    if(dp[n][s] == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}