#include <iostream>
#include <vector>
using namespace std;

char board[3][3] = { {' ',' ', ' '}, {' ', ' ', ' '} , {' ', ' ', ' '} };
int position = 0;
char playerTurn = ' ';
bool gameOver = false;

void display() {
		for (int i = 0; i < 2; i++) {
			cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
			cout << "-----------" << endl;
		}
		cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

void insertPosition(void (display)()) {

	 do{
		 cout << "Choose a position from 1-9: " << endl;
		 cin >> position;
		 {
			if (position == 1 && board[0][0] != 'X' && board[0][0] != 'O') {
				board[0][0] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
			}
			else if (position == 2 && board[0][1] != 'X' && board[0][1] != 'O') {
				board[0][1] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
			}
			else if (position == 3 && board[0][2] != 'X' && board[0][2] != 'O') {
				board[0][2] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
;
			}
			else if (position == 4 && board[1][0] != 'X' && board[1][0] != 'O') {
				board[1][0] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
			}
			else if (position == 5 && board[1][1] != 'X' && board[1][1] != 'O') {
				board[1][1] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
			}
			else if (position == 6 && board[1][2] != 'X' && board[1][2] != 'O') {
				board[1][2] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
			}
			else if (position == 7 && board[2][0] != 'X' && board[2][0] != 'O') {
				board[2][0] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
			}
			else if (position == 8 && board[2][1] != 'X' && board[2][1] != 'O') {
				board[2][1] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
			}
			else if (position == 9 && board[2][2] != 'X' && board[2][2] != 'O') {
				board[2][2] = playerTurn;
				playerTurn = (playerTurn == 'X') ? 'O' : 'X';
				break;
			}
			else {
				cout << "Invalid input." << endl;
			}
		}
	 } while (!(position != 0 && position <= 9));
}

void currentPlayer() {
	cout << "Enter your input (X/O): " << endl;
	cin >> playerTurn;
	if (playerTurn == 'X') {
			cout << "Player [X] turn : ";
	}
	else if (playerTurn == 'O') {
			cout << "Player [O] turn : ";
	}
}



int main() {
	
	while (!gameOver) {
		display();
		currentPlayer();
		insertPosition(display);
	}
	

}
	//PLAYER 1
	//cout << "Player 1: Enter input: " << endl;
	//cin >> input;
	//while (true) {
	//	if (input == 'x' || input == 'o') {
	//		insertPosition(position1, input, board, display);
	//		break;
	//	}
	//	else {
	//		cout << "Please enter a valid input: " << endl;
	//		cin >> input;
	//	}
	//}


	////PLAYER 2
	//cout << "Player 2: Enter input: " << endl;
	//cin >> input;

	//char player2Input;
	//if (input == 'x') {
	//	player2Input = 'o';
	//}
	//else {
	//	player2Input = 'x';
	//}
	//cout << "Player 2: Enter input (" << player2Input << "): " << endl;
	//cin >> input;
	//insertPosition(position2, player2Input, board, display);

	/*while (!input) {
		if (true){
			insertPosition(position2, input, board, display);
			break;
		}
		else {
			cout << "Please enter a valid input: " << endl;
			cin >> input;
		}
	}*/
		/*}
		else {
			if (input1 == 'x' || input1 == 'o') {
				insertPosition(position2, input2, board, display, validatePosition);
				break;
			}
			else {
				cout << "Please enter a valid input: " << endl;
				cin >> input1;
			}
			
		}*/
