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
    int N;
    long long W;
    cin >> N >> W;
    vector<long long> w(N);
    vector<int> v(N);
    for(int i = 0; i < N; ++i){
        cin >> w[i] >> v[i];
    }
    vector< vector<long long> > dp(N + 1,vector<long long>(100001,100000000000000));
    dp[0][0] = 0;
    for(int i = 1; i <= N; ++i){
        for(int j = 0; j <= 100000; ++j){
            if(j < v[i - 1]) {
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = min(dp[i - 1][j - v[i - 1]] + w[i - 1], dp[i - 1][j]);
            }
        }
    }

    long long ans;
    for(int i = 100000; i >= 0; --i){
        if(dp[N][i] <= W){
            ans = i;
            cout << i << endl;
            break;
        }
    }
}