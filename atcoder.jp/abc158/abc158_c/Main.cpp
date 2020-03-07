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
  double a,b,b1,s;
  cin >> a >> b;
  b1 = b * 10.0;
  for(int i = 0; i < 10; i++){
    s = b1+i;
    int a1;
    a1 = s* 0.08;
    if(a==a1){
      cout << s << endl;
      break;
    }
    else if(i == 9){cout << -1 << endl;}
  }

}