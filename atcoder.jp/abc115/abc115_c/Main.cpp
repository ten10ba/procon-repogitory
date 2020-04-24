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
  int n,k;
  long long ans;
  cin >> n >> k;
  vector<long long> h(n);
  for(int i=0; i< n; i++) cin >> h[i];
  sort(h.begin(),h.end());
  ans = h[k-1]-h[0];
  for(int i=0; i<=n-k; i++){
    ans=min(h[i+k-1]-h[i],ans);
  }
  cout << ans << endl;
}
