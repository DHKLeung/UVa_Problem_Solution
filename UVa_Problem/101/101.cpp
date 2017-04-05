#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-23 (YYYYMMDD)
***************************************/
int coordinate_row(int blockmap[100][100], int abecedarian, int num);
int coordinate_col(int blockmap[100][100], int abecedarian, int num);
void putback(int blockmap[100][100], int num, int row, int col);
void allontop(int blockmap[100][100], int num, int arow, int acol, int brow, int bcol);
void print(int blockmap[100][100], int num);
int main(void) {
	int blockmap[100][100];
	int num;
	int a, b, flag;
	string n = "";
	string command = "";
	string temp = "";
	string cmd1, cmd2;
	while (cin >> n) {
		num = stoi(n);
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num; j++) {
				(i == 0) ? (blockmap[i][j] = j) : blockmap[i][j] = -1;
			}
		}
		while (cin >> cmd1) {
			if (cmd1 == "quit") {
				print(blockmap, num);
				break;
			}
			else {
				cin >> a >> cmd2 >> b;
				if (cmd1 == "move" && cmd2 == "onto") {
					if (coordinate_col(blockmap, a, num) == coordinate_col(blockmap, b, num)) {
						continue;
					}
					putback(blockmap, num, coordinate_row(blockmap, a, num), coordinate_col(blockmap, a, num));
					putback(blockmap, num, coordinate_row(blockmap, b, num), coordinate_col(blockmap, b, num));
					allontop(blockmap, num, coordinate_row(blockmap, a, num), coordinate_col(blockmap, a, num), coordinate_row(blockmap, b, num), coordinate_col(blockmap, b, num));
				}
				else if (cmd1 == "move" && cmd2 == "over") {
					if (coordinate_col(blockmap, a, num) == coordinate_col(blockmap, b, num)) {
						continue;
					}
					putback(blockmap, num, coordinate_row(blockmap, a, num), coordinate_col(blockmap, a, num));
					allontop(blockmap, num, coordinate_row(blockmap, a, num), coordinate_col(blockmap, a, num), coordinate_row(blockmap, b, num), coordinate_col(blockmap, b, num));
				}
				else if (cmd1 == "pile" && cmd2 == "onto") {
					if (coordinate_col(blockmap, a, num) == coordinate_col(blockmap, b, num)) {
						continue;
					}
					putback(blockmap, num, coordinate_row(blockmap, b, num), coordinate_col(blockmap, b, num));
					allontop(blockmap, num, coordinate_row(blockmap, a, num), coordinate_col(blockmap, a, num), coordinate_row(blockmap, b, num), coordinate_col(blockmap, b, num));
				}
				else if (cmd1 == "pile" && cmd2 == "over") {
					if (coordinate_col(blockmap, a, num) == coordinate_col(blockmap, b, num)) {
						continue;
					}
					allontop(blockmap, num, coordinate_row(blockmap, a, num), coordinate_col(blockmap, a, num), coordinate_row(blockmap, b, num), coordinate_col(blockmap, b, num));
				}
			}
		}
	}
	return 0;
}
void putback(int blockmap[100][100], int num, int row, int col) {
	for (int i = row + 1; i < num; i++) {
		if (blockmap[i][col] != -1) {
			blockmap[0][blockmap[i][col]] = blockmap[i][col];
			blockmap[i][col] = -1;
		}
	}
}
void allontop(int blockmap[100][100], int num, int arow, int acol, int brow, int bcol) {
	int atop = 0, btop = 0;
	for (int i = arow + 1; i < num; i++) {
		if (blockmap[i][acol] == -1) {
			atop = i - 1;
			break;
		}
	}
	for (int i = brow + 1; i < num; i++) {
		if (blockmap[i][bcol] == -1) {
			btop = i - 1;
			break;
		}
	}
	for (int i = 0; i < atop - arow + 1; i++) {
		blockmap[btop + 1 + i][bcol] = blockmap[arow + i][acol];
		blockmap[arow + i][acol] = -1;
	}
}
int coordinate_row(int blockmap[100][100], int abecedarian, int num) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (blockmap[i][j] == abecedarian) {
				return i;
			}
		}
	}
}
int coordinate_col(int blockmap[100][100], int abecedarian, int num) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (blockmap[i][j] == abecedarian) {
				return j;
			}
		}
	}
}
void print(int blockmap[100][100], int num) {
	for (int i = 0; i < num; i++) {
		cout << i << ':';
		for (int j = 0; j < num; j++) {
			!(blockmap[j][i] != -1) || cout << ' ' << blockmap[j][i];
		}
		cout << endl;
	}
}