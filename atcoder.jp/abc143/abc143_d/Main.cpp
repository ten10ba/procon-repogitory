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
#include <list>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> l(n);
  for(int i=0; i<n; i++){
    cin >> l[i];
  }
  long long sum=0;
  sort(l.begin(),l.end());
  for(int i=0; i<n-2; i++){
    for(int j=i+1; j<n-1; j++){
      int x =lower_bound(l.begin()+j+1,l.end(),l[i]+l[j])-l.begin()-j-1;
      sum+=x;
    }
  }
  cout << sum << endl;
}
