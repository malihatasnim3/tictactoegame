#include <iostream>
using namespace std;

void display(char board[3][3]) {
		for (int i = 0; i < 2; i++) {
			cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
			cout << "-----------" << endl;
		}
		cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

int main() {
	char board[3][3] = { {' ',' ', ' '}, {' ', ' ', ' '} , {' ', ' ', ' '} };
	display(board);
}