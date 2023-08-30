#include <iostream>
using namespace std;

void display(char board[3][3]) {
		for (int i = 0; i < 2; i++) {
			cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
			cout << "-----------" << endl;
		}
		cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

void insertInput(char i, char board[3][3], void display(char board[3][3])) {
	int position;
	cout << "Choose a position from 1-9: " << endl;
	cin >> position;
	switch (position) {
	case 1 : board[0][0] = i ;
		display(board);
		break;
	case 2 : board[0][1] = i ;
		display(board);
		break;
	default:
		cout << "Please enter a valid position" << endl;
		break;

	}
}

int main() {
	char board[3][3] = { {' ',' ', ' '}, {' ', ' ', ' '} , {' ', ' ', ' '} };
	char input;
	cout << "Player 1: Enter input: " << endl;
	cin >> input;
	insertInput(input, board, display);
}