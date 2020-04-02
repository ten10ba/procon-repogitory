//(・ω・)
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
using namespace std;

int main(){
   int n,k,m;
   cin >> n >> k >> m;
   vector<int> a(n-1);
   int sum=0;
   for(int i=0; i<n-1; i++){
       cin >> a[i];
       sum+=a[i];
   }
   if(sum+k>=m*n){
       cout << max(m*n-sum,0) << endl;
   }
   else{
       cout << -1 << endl;
   }
}