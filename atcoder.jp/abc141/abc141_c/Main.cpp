//(・ω・)
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
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
using namespace std;
int main(){
    int n,q;
    long long k;
    cin >>  n >> k >> q;
    vector<int> a(q);
    for(int i=0; i<q; i++){
        cin >> a[i];
    }
    vector<long long> ans(n,k-q);
    for(int i=0; i<q; i++){
        ans[a[i]-1]++;
    }
    for(int i=0; i<n; i++){
        if(ans[i]<=0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}