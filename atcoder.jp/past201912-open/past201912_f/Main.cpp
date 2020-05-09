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
   string s;
   cin >> s;
   vector<string> ans;
   int forl=0,first=0;//最初に1をたして奇数ならfirst，偶数ならlast
   for(int i=0; i<s.size(); i++){
      if(s[i]-'A'<26){
         forl++;
         if(forl%2==1) first=i;
         else{
            string push;
            push=s.substr(first,i+1-first);
            transform(push.begin(),push.end(),push.begin(),::toupper);
            ans.push_back(push);
         }
      }
   }
   sort(ans.begin(),ans.end());
   for(int i=0; i<ans.size(); i++){
      transform(ans[i].begin()+1,ans[i].end()-1,ans[i].begin()+1,::tolower);
      cout << ans[i];
   }
   cout << endl;
}