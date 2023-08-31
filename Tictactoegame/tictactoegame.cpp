#include <iostream>
#include <vector>
using namespace std;

void display(char board[3][3]) {
		for (int i = 0; i < 2; i++) {
			cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
			cout << "-----------" << endl;
		}
		cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

void insertPosition(int p, char i, char board[3][3], void display(char board[3][3])) {

	 do{
		 cout << "Choose a position from 1-9: " << endl;
		 cin >> p;
		{
			if (p == 1) {
				board[0][0] = i;
				display(board);
				break;
			}
			else if (p == 2) {
				board[0][1] = i;
				display(board);
			}
			else if (p == 3) {
				board[0][2] = i;
				display(board);
			}
			else if (p == 4) {
				board[1][0] = i;
				display(board);
			}
			else if (p == 5) {
				board[1][1] = i;
				display(board);
			}
			else if (p == 6) {
				board[1][2] = i;
				display(board);
			}
			else if (p == 7) {
				board[2][0] = i;
				display(board);
			}
			else if (p == 8) {
				board[2][1] = i;
				display(board);
			}
			else if (p == 9) {
				board[2][2] = i;
				display(board);
			}
			else {
				cout << "Invalid input." << endl;
			}
		}
	 } while (!(p != 0 && p <= 9));
}



int validatePosition(int p){
	vector<int> enteredP;
	while (true) {
		if (find(enteredP.begin(), enteredP.end(), p) != enteredP.end()) {
			cout << "Position already entered. Please enter a different position: ";
		}
		else {
			enteredP.push_back(p);
		}
	}
}

int main() {
	char board[3][3] = { {' ',' ', ' '}, {' ', ' ', ' '} , {' ', ' ', ' '} };
	char input1, input2;
	int position1 = 0, position2 = 0;
	display(board);
	//PLAYER 1
	cout << "Player 1: Enter input: " << endl;
	cin >> input1;
	while (true) {
		if (input1 == 'x' || input1 == 'o') {
			insertInput(position1, input1, board, display);
			break;
		}
		else {
			cout << "Please enter a valid input: " << endl;
			cin >> input1;
		}
	}


	////PLAYER 2
	//cout << "Player 2: Enter input: " << endl;
	//cin >> input2;
	//while (true) {
	//	if (input1 == input2) {
	//		cout << "Please enter a valid input: " << endl; \
	//			cin >> input2;
	//	}
	//	else {
	//		
	//	}
	//}


}