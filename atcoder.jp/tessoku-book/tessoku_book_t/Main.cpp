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
    string s,t;
    cin >> s >> t;
    vector< vector<int> > dp(s.length() + 1, vector<int>(t.length() + 1, 0));
    for(int i = 1; i <= s.length(); ++i){
        for(int j = 1; j <= t.length(); ++j){
            if(s[i - 1] == t[j - 1]){
                dp[i][j] = max(max(dp[i - 1][j - 1] + 1, dp[i - 1][j]), dp[i][j - 1]);
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[s.length()][t.length()] << endl;
    return 0;
}