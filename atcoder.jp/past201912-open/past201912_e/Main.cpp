//(・ω・)
#include <stdio.h>
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, atoi
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
#include <sstream> //istringstream
#include <stdlib.h>
#include <list>
#include <iterator>//std::advance()
using namespace std;

int main(){
   int n,q;
   cin >> n >> q;
   vector<vector<char>> f(n,vector<char>(n,'N'));
   for(int i=0; i<q; i++){
      int s;
      cin >> s;
      if(s==1){
         //1ab
         int a,b;
         cin >> a >> b;
         f[a-1][b-1]='Y';
      }
      else if(s==2){
         int a;
         cin >> a;
         for(int i=0; i<n; i++){
            if(f[i][a-1]=='Y') f[a-1][i]='Y';
         }
      }
      else{
         int a;
         cin >> a;
         vector<int> follow;
         for(int i=0; i<n; i++){
            if(f[a-1][i]=='Y'){
               for(int j=0; j<n; j++){
                  if(j==a-1) continue;
                  else if(f[i][j]=='Y' && f[a-1][j]=='N'){
                     follow.push_back(j);
                  }
               }
            }
         }
         for(int i=0; i<follow.size(); i++){
            f[a-1][follow[i]]='Y';
         }
      }
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         cout << f[i][j];
      }
      cout << endl;
   }
}