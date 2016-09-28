#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <utility>
#include <stack>
#include <cstring>

using namespace std;

char dict[2] = { 'r','b'};
void change(char &c) {
	if (c == dict[0]) c = dict[1];
	else c = dict[0];
}
int count(const string &s, const char &start) {
	int len = s.length();
	int ans = 0;
	char cur = start;
	int countOfBlack = 0;
	int countOfRed = 0;
	for (int i = 0; i<len; ++i) {
		if (s[i] != cur) {
			if (s[i] == 'r') ++countOfRed;
			else ++countOfBlack;
		}
		change(cur);
	}
	return max(countOfBlack, countOfRed);
}
int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c[2];
	memset(c, 0, sizeof(c));
	for (int i = 0; i<2; ++i) {
		c[i] = count(s, dict[i]);
	}
	cout << min(c[0], c[1]) << endl;
	return 0;
}