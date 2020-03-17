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
  int n;
  cin >> n;
  vector<long long> a(n);
  for(int i=0; i<n; ++i){
    cin >>a[i];
  }
  vector<long long> b(2);
  int w=0;
  sort(a.begin(),a.end());
  for(int i=n-2; i>=0; --i){
    if(a[i+1]==a[i]){
      b[w]=a[i];
      w++;
      if(i==1 || w==2) break;
      else{
        i--;
      }
    }
  }
  if(w==2){
    cout << b[0]*b[1] << endl;
  }
  else{
    cout << 0 << endl;
  }
}
