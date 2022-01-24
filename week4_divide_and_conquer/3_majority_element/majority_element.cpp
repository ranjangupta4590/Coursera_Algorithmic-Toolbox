#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    ++mp[a];
  }
  for (auto &i : mp)
  {
    if (i.second > n / 2)
    {
      cout << 1 << endl;
      ;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}