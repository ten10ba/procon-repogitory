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
  int n;
  long long sum=0;
  string s;
  cin >> n >> s;
  if(n>3){
    long long r=0,g=0,b=0;
    for(int i=n-1; i>=0; i--){
      if(s[i]=='R'){
        r++;
      }
      else if(s[i]=='G'){
        g++;
      }
      else{
        b++;
      }
    }
    if(r==0 || g==0 || b==0) sum=0;
    else{
     sum=r*g*b;
      for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
          if(s[i]!=s[j]){
            if(s[i]=='R'||s[j]=='R'){
              if(s[i]=='G'||s[j]=='G'){
                //B
                if(s[j+j-i]=='B') sum--;
              }
              else if(s[i]=='B'||s[j]=='B'){
                //G
                if(s[j+j-i]=='G') sum--;
              }
            }
            else{
              //R
              if(s[j+j-i]=='R') sum--;
            }
          }
        }
      }
    }
  }
  
  cout << sum << endl;
}
