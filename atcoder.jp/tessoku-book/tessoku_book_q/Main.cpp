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
    vector<int> b(n);
    for(int i = 1; i < n; i++){
        cin >> a[i];
    }
    for(int i = 2; i < n; i++){
        cin >> b[i];
    }
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = a[1];
    for(int i = 2; i < n; i++){
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
    }
    vector<int> ans;
    ans.push_back(n);
    int index = n - 1;
    while(index != 0){
        if(dp[index - 1] + a[index] == dp[index]){
            ans.push_back(index);
            index--;
        }
        else{
            ans.push_back(index - 1);
            index -= 2;
        }
    }

    cout << ans.size() << endl;
    for(int i = ans.size() - 1; i >= 0; i--){
        cout  << ans[i] << " ";
    }
    cout << endl;

    return 0;
}