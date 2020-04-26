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
  vector<string> s(n);
  for(int i=0; i<n; i++) cin >> s[i];
  sort(s.begin(),s.end());
  long long sum=1;
  for(int i=0; i<n-1; i++){
    if(s[i]!=s[i+1]) sum++;
  }
  cout << sum << endl;
}
