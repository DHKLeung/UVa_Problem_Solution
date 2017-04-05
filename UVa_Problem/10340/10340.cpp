#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-25 (YYYYMMDD)
***************************************/
int main(void) {
	string s, t;
	int sflag, tstate;
	while (cin >> s >> t){
		sflag = 0;
		tstate = 0;
		for (int i = 0; i < s.length(); i++) {
			for (int j = tstate; j < t.length(); j++) {
				if (s[i] == t[j]) {
					tstate = j + 1;
					sflag++;
					break;
				}
			}
		}
		(sflag == s.length()) ? printf("Yes\n") : printf("No\n");
	}
	return 0;
}
