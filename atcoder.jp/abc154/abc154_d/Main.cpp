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
#include <iomanip>
#include <limits>
using namespace std;

int main(){
  int n,k;
  double l = 0.0, sum = 0.0;
  cin >> n >> k;
  vector<int> p(n);
  for(int i = 0; i < n; i++){
    cin >> p.at(i);
  }

  for(int i = 0; i < k; i++){
      sum+=(p.at(i)+1)/2.0;
  }
  l = sum;

  for(int i = 0; i < n-k; i++){
    sum-=((p.at(i)+1.0)/2.0);
    sum+=((p.at(i+k)+1.0)/2.0);
    if(l < sum) l = sum;
  }
  cout << fixed << setprecision(7);
  cout << l << endl;
}