#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> dp(N);
  vector<int> a(N);
  
  for(int i = 1; i < N; ++i){
    cin >> a[i];
  }
  dp[0] = 0;
  dp[1] = a[1];
  for(int i = 2; i < N; ++i){
    int b;
    cin >> b;
    dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b);
  }
  cout << dp[N - 1] << endl;
  



  return 0;
}
