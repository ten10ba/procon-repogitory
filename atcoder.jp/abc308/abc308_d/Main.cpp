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
vector<vector<bool>> visited(500, vector<bool>(500, false));
vector<vector<char>> s(500, vector<char>(500));
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
void dfs(int ph, int pw, int h, int w){
    visited[ph][pw] = true;
    for(int i = 0; i < 4; ++i){
        if(ph + dx[i] < 0 || ph + dx[i] > h - 1 || pw + dy[i] < 0 || pw + dy[i] > w - 1) continue;
        if(visited[ph + dx[i]][pw + dy[i]]) continue;
        if(s[ph][pw] == 's'){
            if(s[ph + dx[i]][pw + dy[i]] == 'n'){
                dfs(ph + dx[i], pw + dy[i], h, w);
            }
        }else if(s[ph][pw] == 'n'){
            if(s[ph + dx[i]][pw + dy[i]] == 'u'){
                dfs(ph + dx[i], pw + dy[i], h, w);
            }
        }else if(s[ph][pw] == 'u'){
            if(s[ph + dx[i]][pw + dy[i]] == 'k'){
                dfs(ph + dx[i], pw + dy[i], h, w);
            }
        }else if(s[ph][pw] == 'k'){
            if(s[ph + dx[i]][pw + dy[i]] == 'e'){
                dfs(ph + dx[i], pw + dy[i], h, w);
            }
        }else if(s[ph][pw] == 'e'){
            if(s[ph + dx[i]][pw + dy[i]] == 's'){
                dfs(ph + dx[i], pw + dy[i], h, w);
            }
        }
    }
}

int main(){
    int h,w;
    cin >> h >> w;
    for(int i = 0; i < h; ++i){
        string inp;
        cin >> inp;
        for(int j = 0; j < w; ++j){
            s[i][j] = inp[j];
        }
    }
    dfs(0, 0, h, w);
    if(visited[h - 1][w - 1]) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}
