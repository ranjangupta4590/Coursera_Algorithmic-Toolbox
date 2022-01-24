#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  if (n <= 2)
  {
    cout << 1 << '\n'
         << n;
    return 0;
  }
  vector<int> a;
  int last = 0;
  int sum = 0;
  while (1)
  {
    ++last;
    if (n - sum - last == 0)
    {
      a.push_back(last);
      break;
    }
    if (n - sum - last <= last)
    {
      continue;
    }
    sum += last;
    a.push_back(last);
  }
  cout << a.size() << '\n';
  for (auto &i : a)
  {
    cout << i << ' ';
  }
  return 0;
}