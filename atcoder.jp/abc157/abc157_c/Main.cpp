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
  int n,m;
  long long ans=0;
  cin >> n >> m;
  vector<int> s(m);
  vector<int> c(m);
  vector<int> x(n,0);
  x.at(0)=1;
  vector<pair<int,int>> pairs(m);
  if(m == 0){
    if(n == 1){cout << 0 << endl;}
    else{
      cout << 1;
      if(n==3){
        cout << 0;
      }
      cout << 0 << endl;
    }
  }
  else{
      for(int i = 0; i < m; i++){
    cin >> s.at(i) >> c.at(i);
    pairs.at(i)=make_pair(s.at(i),c.at(i));
  }
  sort(pairs.begin(),pairs.end());
  for(int i = 0; i < m-1; i++){
    if(pairs.at(i).first==pairs.at(i+1).first){
      if(pairs.at(i).second!=pairs.at(i+1).second){
        ans =  1;
      }
    }
    else if(pairs.at(i).first==1){
      if(pairs.at(i).second==0 && n != 1){
        ans = 1;
      }
    }
  }
  if(pairs.at(m-1).first==1){
    if(pairs.at(m-1).second==0 && n != 1){
        ans = 1;
    }
  }
  if(ans!=1){
    for(int i = 0; i < m; i++){
      x.at(pairs.at(i).first-1)=pairs.at(i).second;
    }
    for(int i = 0; i < n-1; i++){
    cout << x.at(i);
  }
  cout << x.at(n-1) << endl;
  }
  if(ans==1){
    cout << -1 << endl;
  }
  }
}