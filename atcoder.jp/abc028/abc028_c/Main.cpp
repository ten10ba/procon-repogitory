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
    int a,b,c,d,e,sum;
    vector<int> s(10);
    vector<int> x(10,0);
    cin >> a >> b >> c >> d >> e;
    s[0]=a+b+c;
    s[1]=a+b+d;
    s[2]=a+b+e;
    s[3]=a+c+d;
    s[4]=a+c+e;
    s[5]=a+d+e;
    s[6]=b+c+d;
    s[7]=b+c+e;
    s[8]=b+d+e;
    s[9]=c+d+e;
    sort(s.begin(),s.end());
    int j = 0;
    for(int i=0; i<10; i++){
        if(x[j]!=s[9-i]){
            x[j]=s[9-i];
            j++;
        }
    }
    cout << x[2] <<endl;
}