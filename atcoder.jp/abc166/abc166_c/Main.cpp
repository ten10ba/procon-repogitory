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
   int n,m;
   cin >> n >> m;
   vector<int> a(m);
   vector<int> b(m);
   vector<long long> h(n);
   vector<int> ans(n,0);
   vector<int> cou(n,0);
   for(int i=0; i<n; i++) cin >> h[i];
   for(int i=0; i<m; i++){
     cin >> a[i] >> b[i];
     cou[a[i]-1]++;
     cou[b[i]-1]++;
     if(h[a[i]-1]>h[b[i]-1]) ans[a[i]-1]++;
     else if(h[a[i]-1]<h[b[i]-1]) ans[b[i]-1]++;
   }
   int sum =0;
   for(int i=0; i<n; i++){
     if(cou[i]==0) sum++;
     else if(ans[i]==cou[i]) sum++;
   }
   cout << sum << endl;
}
