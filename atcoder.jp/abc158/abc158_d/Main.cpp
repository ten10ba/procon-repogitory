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
  string s;
  long long q;
  cin >> s >> q;
  vector<vector<long long>> t(q,vector<long long>(2,0));
  vector<char> c(q);
  long long jyu =0;
  for(long long i = 0; i < q; i++){
    cin >> t[i][0];
    if(t[i][0]== 2){
      cin >> t[i][1] >> c[i];
    }
    if(t[i][0]==1){
      jyu++;
    }
    else{
      if(jyu%2==0){
        if(t[i][1]==1){
          s.insert(s.begin(),c[i]);
        }
        else{
          s.push_back(c[i]);
        }
      }
      else{
        if(t[i][1]==2){
          s.insert(s.begin(),c[i]);
        }
        else{
          s.push_back(c[i]);
        }
      }
    }
  }
  if(jyu %2 ==1){
    reverse(s.begin(),s.end());
  }
    cout << s << endl;

}
