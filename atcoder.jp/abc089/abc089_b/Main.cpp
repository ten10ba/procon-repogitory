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
    int n,p=0,w=0,g=0,y=0;
    cin >> n;
    vector<char> s(n);
    for(int i=0; i<n; i++){
        cin  >> s[i];
    }
    for(int i=0; i<n; i++){
        if(s[i]=='P' && p == 0) p++;
        else if(s[i]=='W' && w == 0) w++;
        else if(s[i]=='G' && g == 0) g++;
        else if(s[i]=='Y' && y == 0) y++;
    }
    if((p+w+g+y)==3) cout << "Three" << endl;
    else cout << "Four" << endl;
}