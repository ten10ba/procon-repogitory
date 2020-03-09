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
    int h,w;
    bool p = true;
    cin >> h >> w;
    vector<vector<char>> s(h,vector<char>(w));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> s.at(i).at(j);
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(s.at(i).at(j)=='#'){
                int r = 0;
                if(i!=0){
                    if(s.at(i-1).at(j)=='#') r++;
                }
                if(i!=(h-1)){
                    if(s.at(i+1).at(j)=='#') r++;
                }
                if(j!=0){
                    if(s.at(i).at(j-1)=='#') r++;
                }
                if(j!=(w-1)){
                    if(s.at(i).at(j+1)=='#') r++;
                }
                if(r==0){
                    p = false;
                    break;
                }
            }
        }
    }
    if(p){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}