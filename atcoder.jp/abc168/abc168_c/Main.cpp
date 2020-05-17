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
    int a,b,h,m;
    cin >> a >> b >> h >> m;
    double xh,yh,xm,ym;
    double pi=3.1415926535897932384626433832795;
    xh=a*(cos(pi/2.00000000000-pi*(h/6.00000000000+m/360.00000000000)));
    yh=a*(sin(pi/2.0-pi*(h/6.0+m/360.00000000000)));
    xm=b*cos(pi/2.0000000000-pi*m/30.00000000000);
    ym=b*sin(pi/2.00000000000-pi*m/30.00000000000);
    cout << setprecision(20) <<  sqrt((xh-xm)*(xh-xm)+(yh-ym)*(yh-ym)) << endl;
}
