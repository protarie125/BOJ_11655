#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	getline(cin, s);
	const auto& n = s.length();
	for (auto i = decltype(n){ 0 }; i < n; ++i) {
		const auto& c = s[i];
		if ('a' <= c && c <= 'z') {
			s[i] -= 13;
			if (s[i] < 'a') {
				s[i] += 26;
			}
		}
		else if ('A' <= c && c <= 'Z') {
			s[i] -= 13;
			if (s[i] < 'A') {
				s[i] += 26;
			}
		}
	}

	cout << s;

	return 0;
}