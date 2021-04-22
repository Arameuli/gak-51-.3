#include <iostream>
#include <string>
#include <vector>
#include"Amindi.h"
using namespace std;
int main()
{
	vector<Amindi> s;
	Amindi t;
	while (cin >> t.qalaqi >> t.speed >> t.wvima >> t.weather >> t.temp) {
		s.push_back(t);
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i].wvima == "yes")
			s[i].print();
	}
}
