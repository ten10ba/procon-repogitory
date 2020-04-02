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
  int sum=0;
  vector<long long>a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  int s=1;
  for(int i=0; i<n-1; i++){
    if(a[i]==a[i+1]) s++;
    else{
      if(a[i]>s){sum+=s;}
      else if(a[i]<s){
        sum+=(s-a[i]);
      }
      s=1;
    }
  }
  if(a[n-1]>s){sum+=s;}
  else if(a[n-1]<s){
    sum+=(s-a[n-1]);
  }
  cout << sum << endl;
}
