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
using namespace std;
int main(){
  int n;
  string m = "YES";
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  for(int i = 0; i < n-1; i++){
    if(a.at(i)==a.at(i+1)){
      m = "NO";
    }
  }
  cout << m << endl;
}