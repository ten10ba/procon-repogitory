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
using namespace std;
int main(){
    int n;
    cin >> n;
    long long sum;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> k(n);
    for(int i=0; i<n; i++){
      cin >> a[i];
      b[i]=a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        long long x=upper_bound(a.begin(),a.end(),a[i])-lower_bound(a.begin(),a.end(),a[i]);
        k[a[i]]=(x-1);
        sum+=k[a[i]];
    }
    sum/=2;
    for(int i=0; i<n; i++){
        cout << sum-k[b[i]] << endl;
    }
    return 0;
}
