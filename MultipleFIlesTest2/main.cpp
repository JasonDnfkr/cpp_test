#include "a.h"
#include "b.h"

#include <cstdio>
#include <string>

std::string::size_type find_char(const std::string &s, char c, std::string::size_type &occurs) {
	auto ret = s.size();
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			occurs++;
			if (i == s.size()) ret = i;
		}
	}
	return ret;
}

int count_str_size(std::string &str) {
	int cnt = 0;
	for (auto& ch : str) {
		cnt++;
	}
	return cnt;
}

int main() {
	printf("%d %d\n", funa(3), funb(3));

	std::string str("asdasdasd");

	printf("%d\n", count_str_size(str));

	return 0;
}