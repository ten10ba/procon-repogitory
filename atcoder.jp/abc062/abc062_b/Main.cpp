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
  int h,w;
  cin >> h >> w;
  vector<vector<char>> a(h,vector<char>(w));
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++) cin >> a[i][j];
  }
  for(int i=0;i<w+2; i++){
    cout << '#';
  }
  cout << endl;
   for(int i=0; i<h; i++){
     cout << '#';
    for(int j=0; j<w; j++) cout <<  a[i][j];
    cout << '#' << endl;
  }
  for(int i=0;i<w+2; i++){
    cout << '#';
  }
  cout << endl;
}