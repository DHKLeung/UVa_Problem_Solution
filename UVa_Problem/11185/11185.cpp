#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-28 (YYYYMMDD)
***************************************/
int main(void) {
	int n;
	string output;
	while ((scanf("%d", &n) != EOF) && n >= 0) {
		output.clear();
		do {
			output = to_string(n % 3) + output;
			n /= 3;		
		} while (n > 0);
		printf("%s\n", output.c_str());
	}
	return 0;
}