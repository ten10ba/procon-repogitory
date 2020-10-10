//(・ω・)
#define _GLIBCXX_DEBUG
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
const double pi=3.141592653589793238;
int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    long long ans=0;
    for(int i=0; i<h; i++){
        cin >> s[i];
        for(int j=0; j<w-1; j++){
            if(s[i].at(j)==s[i].at(j+1) && s[i].at(j)=='.') ans++;
        }
    }
    for(int i=0; i<w; i++){
        for(int j=0; j<h-1; j++){
            if(s[j].at(i)==s[j+1].at(i) && s[j].at(i)=='.') ans++;
        }
    }
    cout << ans << endl;

}

