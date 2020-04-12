//(・ω・)
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
using namespace std;

int main(){
   int n,a,b;
   cin >> n >> a >> b;
   string s;
   cin >> s;
   int tuuka=0,kaigai=0;
   for(int i=0; i<n; i++){
      if(s[i]=='a'){
         if(tuuka<a+b){
            cout << "Yes" << endl;
            tuuka++;
         }
         else cout << "No" << endl;
      }
      else if(s[i]=='b'){
         if(tuuka<a+b && kaigai<b){
            cout << "Yes" << endl;
            tuuka++;
            kaigai++;
         }
         else cout << "No" << endl;
      }
      else cout << "No" << endl;
   }
}