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
    int p = 0;
   vector<vector<int>> a(3,vector<int>(3));
   vector<vector<int>> c(3,vector<int>(3,0));
   for(int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
           cin >> a.at(i).at(j);
       }
   }
   int n;
   cin >> n;
   vector<int> b(n);
   for(int i = 0; i < n; i ++){
       cin >> b.at(i);
   }
   for(int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
           for(int k = 0; k < n; k++){
                if(a.at(i).at(j)==b.at(k)){
                    c.at(i).at(j)=1;
                    break;
                }
           }
       }
   }
   for(int i = 0; i < 3; i++){
       if(c.at(i).at(0)==1 && c.at(i).at(1)==1){
           if(c.at(i).at(2)==1){
               p = 1;
               break;
           }
       }
       if(c.at(0).at(i)==1 && c.at(1).at(i)==1){
           if(c.at(2).at(i)==1){
               p = 1;
               break;
           }
       }
   }
   if(c.at(1).at(1)==1){
       if(c.at(0).at(0)==1 && c.at(2).at(2)==1){
           p = 1;
       }
       if(c.at(0).at(2)==1 && c.at(2).at(0)==1){
           p = 1;
       }
   }
   if(p == 1){
       cout << "Yes" << endl;
   }
   else{
       cout << "No" << endl;
   }
}