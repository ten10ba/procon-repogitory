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
  int n,sum;
  cin >> n;
  vector<int> a(n);
  vector<int> co(9,0);
  for(int i=0; i<n; i++){
    cin >> a[i];
    int x;
    x=a[i]/400;
    co[min(x,8)]++;
  }
  for(int i=0; i<8; i++){
    if(co[i]!=0) sum++;
  }
  if(sum!=0){
    cout << sum << " " << sum+co[8] << endl;
  }
  else{
    cout << 1 << " " << sum+co[8] << endl;
  }
}
