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
    int N,W;
    cin >> N >> W;
    vector<int> w(N);
    vector<long long> v(N);
    for(int i = 0; i < N; ++i){
        cin >> w[i] >> v[i];
    }
    long long minf = -10000000000000;

    vector< vector<long long> > dp(N + 1,vector<long long>(W + 1, minf));
    dp[0][0] = 0;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j <= W; ++j){
            if(j < w[i]){
                dp[i + 1][j] = dp[i][j];
            }
            else{
                dp[i + 1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
            }
        }
    }
    
    cout << *max_element(dp[N].begin(), dp[N].end()) << endl;

}