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
    int N;
    cin >> N;
    vector<vector<int>> G(N+1);
    vector<int> dist(N + 1, -1);
    queue<int> q;
    for(int i = 0; i < N - 1; i++){
        int A, B;
        cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A);
    
    }
    dist[1] = 0;
    q.push(1);
    int longest = 0, longesti = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i : G[v]){
            if(dist[i] != -1) continue;
            dist[i] = dist[v] + 1;
            if(dist[i] > longest){
                longest = dist[i];
                longesti = i; 
            }
            q.push(i);
        }
    }

    vector<int> dist2(N + 1, -1);
    dist2[longesti] = 0;
    q.push(longesti);
    int longest2 = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i : G[v]){
            if(dist2[i] != -1) continue;
            dist2[i] = dist2[v] + 1;
            if(dist2[i] > longest2){
                longest2 = dist2[i]; 
            }
            q.push(i);
        }
    }
    cout << longest2 + 1 << endl;
}

