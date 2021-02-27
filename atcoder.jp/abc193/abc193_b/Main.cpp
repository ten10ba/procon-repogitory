//ATC001B
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // long long64_t, long long*_t
#include <cstdio> // prlong longf
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
    vector<long long> a(n);
    vector<long long> p(n);
    vector<long long> x(n);
    long long ans = 1000000000;
    bool ansn = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> p[i] >> x[i];
        long long time = a[i];
        if(time + 0.5 <= x[i]) {
            ans = min(ans,p[i]);
            ansn = 1;
        }
    }
    if(ansn) cout << ans << endl;
    else cout << -1 << endl;
}
