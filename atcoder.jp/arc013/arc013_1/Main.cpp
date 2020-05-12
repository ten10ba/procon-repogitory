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
    int n,m,l,p,q,r;
    cin >> n >> m >> l >> p >> q >> r;
    vector<int> ans(6);
    ans[0]=(n/p)*(m/q)*(l/r);
    ans[1]=(n/p)*(m/r)*(l/q);
    ans[2]=(n/q)*(m/p)*(l/r);
    ans[3]=(n/q)*(m/r)*(l/p);
    ans[4]=(n/r)*(m/q)*(l/p);
    ans[5]=(n/r)*(m/p)*(l/q);
    sort(ans.begin(),ans.end());
    cout << ans[5] << endl;
}