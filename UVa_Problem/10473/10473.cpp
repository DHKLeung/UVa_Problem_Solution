#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-26 (YYYYMMDD)
***************************************/
int main(void) {
	string input, temp;
	stringstream ss;
	int n;
	while (getline(cin, input) && input[0] != '-') {
		if (input[1] == 'x') {
			for (int i = 2; i < input.length(); i++) {
				temp += input[i];
			}		
			ss << temp;
			ss >> hex >> n;
			printf("%d\n", n);
		}
		else {
			ss << input;
			ss >> dec >> n;
			printf("0x%X\n", n);
		}
		temp.clear();
		ss.clear();
	}
	return 0;
}