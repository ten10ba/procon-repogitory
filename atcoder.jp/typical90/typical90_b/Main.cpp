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

string kakko(int N){
    string a = "";
    for(int i = 0; i < N / 2; ++i) a += '(';
    for(int i = N / 2; i < N; ++i) a += ')';
    return a;
}


int main(){
    int N;
    cin >> N;
    if(N % 2 == 0){
        string str = kakko(N);
        do{
            int left = 0, right = 0;
            bool hantei = true;
            for(int i = 0; i < N; i++){
                if(str[i] == '(') left ++;
                else right++;
                if(right - left > 0){
                    hantei = false;
                    break;
                }
            }
            if(hantei) cout << str << endl;
        }while(next_permutation(str.begin(), str.end()));
    }
}

