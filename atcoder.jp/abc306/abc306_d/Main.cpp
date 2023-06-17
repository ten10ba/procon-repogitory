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
    vector<vector<long long>> dp(2, vector<long long>(n + 1, -1));
    dp[0][0] = 0;
    for(int i = 1; i <= n; ++i){
        int x;
        long long y;
        cin >> x >> y;
        if(x == 0){
            dp[1][i] = dp[1][i - 1];
            dp[0][i] = max(max(dp[0][i - 1], dp[1][i - 1]) + y, dp[0][i - 1]);
        }
        else{
            dp[0][i] = dp[0][i - 1];
            if(y > 0){
                dp[1][i] = max(dp[0][i - 1] + y, dp[1][i - 1]);
            }
            else{
                dp[1][i] = dp[1][i - 1];
            }
        }
    }
    

    cout << max(dp[0][n],dp[1][n]) << endl;

    return 0;
}
