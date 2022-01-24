#include<bits/stdc++.h>
using namespace std;

// int get_change(int m) {
//   //write your code here
//   return n;
// }

int main () {
	int n ;
	cin >> n ;
	int c1 = n / 10 ;
	n %= 10 ;
	int c2 = n / 5 ;
	n %= 5 ;
	cout << c1 + c2 + n ;
	return 0 ;
}
