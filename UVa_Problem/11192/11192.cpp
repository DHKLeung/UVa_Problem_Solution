#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-27 (YYYYMMDD)
***************************************/
int main(void) {
	int n, times, flag;
	string input, temp;
	while (scanf("%d", &times) && times != 0){
		cin.ignore();
		getline(cin, input);
		n = input.length() / times;
		flag = 0;

		for (int i = 1; i <= times; i++) {

			for (int j = flag; j < n + flag; j++) {
				temp += input[j];
			}
			reverse(temp.begin(), temp.end());
			cout << temp;
			temp.clear();
			flag = n + flag;
		}
		printf("\n");
	}
	return 0;
}