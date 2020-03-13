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
  vector<int> v1(n/2);
  vector<int> v2(n/2);
  for(int i=0; i<n/2; i++){
    cin >> v1[i] >> v2[i];
  }
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  int s1=1, s2=1,s1max=0, s2max=0,s12=0,s22=0,v1m=0,v2m=0;
  if(n!=2){
    for(int i=1; i<n/2; i++){
      if(v1[i]==v1[i-1]){
        s1++;
      }
      else if(v1[i]!=v1[i-1]){
        if(s1max<s1){
          s12=s1max;
          s1max=s1;
          v1m=v1[i-1];
        }
        else if(s12<s1){
          s12 = s1;
        }
        s1=1;
      }
      if(v2[i]==v2[i-1]) s2++;
      else if(v2[i]!=v2[i-1]){
        if(s2max<s2){
          s22=s2max;
          s2max=s2;
          v2m=v2[i-1];
        }
        else if(s22<s2){
          s22 = s2;
        }
        s2=1;
      }
      if(i==n/2-1){
        if(s1max<s1){
          s12=s1max;
          s1max=s1;
          v1m=v1[i-1];
        }
        else if(s12<s1){
          s12 = s1;
        }
        if(s2max<s2){
          s22=s2max;
          s2max=s2;
          v2m=v2[i-1];
        }
        else if(s22<s2){
          s22 = s2;
        }
      }
    }
  }
  if(n==2){
    if(v1[0]==v2[0]) cout << 1 << endl;
    else cout << 0 << endl;
  }
  else if(v1m==v2m && v1m != 0){
    cout << min(n-s1max-s22,n-s2max-s12) << endl;
  }
  else{
    cout << n-s1max-s2max <<endl;
  }
}
