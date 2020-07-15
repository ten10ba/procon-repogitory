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
   int n;
   cin >> n;
   vector<string> s(n);
   int ac=0,wa=0,tle=0,re=0;
   for(int i=0; i<n; i++){
      cin >> s[i];
      if(s[i].size()==3) tle++;
      else if(s[i]=="AC") ac++;
      else if(s[i]=="WA") wa++;
      else re++;
   }
   cout << "AC x " << ac << endl;
   cout << "WA x " << wa << endl;
   cout << "TLE x " << tle << endl;
   cout << "RE x " << re << endl;
}

