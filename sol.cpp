#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	if ((s[0] > 'a' && s[0] < 'h') && (s[1] > '1' && s[1] < '8')) {
		// if the column is greater than 'a' but less than 'h', and the row is greater than '1' but less than '8'
		// then, the total number of possible is moves is 8
		cout << 8;
	} else if ((s[0] == 'a' || s[0] == 'h') && (s[1] == '1' || s[1] == '8')) {
		// if the king is in the corner, then the total number of possible moves is 3
		cout << 3;
	} else {
		// if the king is on either side of the chess board, then the total number of possible moves is 5
		cout << 5;
	}
	cout << '\n';	
	return 0;	
}
