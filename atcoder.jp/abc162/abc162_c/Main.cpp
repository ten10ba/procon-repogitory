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
#include <numeric>
#include <type_traits>
using namespace std;
int main(){
  int k,sum=0;
  cin >> k;
  for(int i=1; i<=k; i++){
    for(int j=1; j<=k; j++){
      for(int l=1; l<=k; l++){
        int a=__gcd(i,j);
        sum+=__gcd(a,l);
      }
    }
  }
  cout << sum << endl;
}
