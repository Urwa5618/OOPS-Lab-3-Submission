#include <iostream>
using namespace std;

class TicTacToe {
private:
    int board[3][3];

public:

    TicTacToe() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                board[i][j] = 0;
    }


    void displayBoard() {
        cout << "\nBoard:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == 0)
                    cout << ". ";
                else if (board[i][j] == 1)
                    cout << "X ";
                else
                    cout << "O ";
            }
            cout << endl;
        }
    }

    bool makeMove(int player, int row, int col) {
        if (row < 0 || row > 2 || col < 0 || col > 2)
            return false;

        if (board[row][col] != 0)
            return false;

        board[row][col] = player;
        return true;
    }

    bool checkWin(int player) {
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == player &&
                board[i][1] == player &&
                board[i][2] == player)
                return true;

            if (board[0][i] == player &&
                board[1][i] == player &&
                board[2][i] == player)
                return true;
        }

        if (board[0][0] == player &&
            board[1][1] == player &&
            board[2][2] == player)
            return true;

        if (board[0][2] == player &&
            board[1][1] == player &&
            board[2][0] == player)
            return true;

        return false;
    }

    bool checkDraw() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] == 0)
                    return false;
        return true;
    }
};

int main() {
    TicTacToe game;
    int currentPlayer = 1;
    int row, col;

    while (true) {
        game.displayBoard();
        cout << "\nPlayer " << currentPlayer
             << " enter row and column (0-2): ";
        cin >> row >> col;

        if (!game.makeMove(currentPlayer, row, col)) {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        if (game.checkWin(currentPlayer)) {
            game.displayBoard();
            cout << "\nPlayer " << currentPlayer << " wins!\n";
            break;
        }

        if (game.checkDraw()) {
            game.displayBoard();
            cout << "\nThe game is a draw.\n";
            break;
        }

        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}