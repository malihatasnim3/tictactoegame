#include <iostream>
using namespace std;

char board[3][3] = { {' ',' ', ' '}, {' ', ' ', ' '} , {' ', ' ', ' '} };
int position = 0;
char playerTurn = 'X';
bool draw = false;

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
	if (playerTurn == 'X') {
			cout << "Player [X] turn : ";
	}
	else if (playerTurn == 'O') {
			cout << "Player [O] turn : ";
	}
}


bool gameWinner() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if ((board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
				(board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
				draw = false;
				return false;
			}

			else if ((board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
				(board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
				draw = false;
				return false;
			}
			else if (board[i][j] != 'X' && board[i][j] != 'O') {
				draw = false;
				return true;
			}
		}
	}
}


int main() {
	
	do{
		display();
		currentPlayer();
		insertPosition(display);
	} while (gameWinner());
	display();
	if (draw = false && playerTurn == 'O') {
		cout << "Congratulations! Player with [X] has won the game!" << endl;
	}
	else if (draw = false && playerTurn == 'X') {
		cout << "Congratulations! Player with [O] has won the game!" << endl;
	}
	else if (draw = true){
		cout << "Match Draw" << endl;
	}
	system("pause");
	return 0;
}
	