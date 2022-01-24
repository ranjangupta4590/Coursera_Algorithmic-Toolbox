#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  std::cin >> m;
  vector<int> v(m+1,INT_MAX);
  v[0]=0;
  v[1]=1;
  v[2]=2;
  v[3]=1;
  v[4]=1;
  for (int i = 5; i <=m; i++)
  {
  	v[i] = 1 + min ({v[i-1] , v[i-3] , v[i-4]}) ;
  }
  cout<<v[m]<<endl;
  return 0;
}
