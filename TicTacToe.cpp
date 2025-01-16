#include <iostream>
#include <vector>

using namespace std;

class TicTacToe 
{
    private:
        vector<vector<char>> board;
        char currentPlayer;

    public:
        TicTacToe() : board(3, vector<char>(3, ' ')), currentPlayer('X') {}

        void printBoard() 
        {
            cout << "\n";

            for (int i = 0; i < 3; i++) 
            {
                cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "\n";

                if (i < 2)
                {
                    cout << "---|---|---\n";
                }
            }

            cout << "\n";
        }

        bool makeMove(int row, int col) 
        {
            if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
                return false;
            }

            board[row][col] = currentPlayer;

            return true;
        }

        bool checkWin() {
            for (int i = 0; i < 3; ++i) 
            {
                if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
                    return true;

                if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
                    return true;
            }

            if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
                return true;

            if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
                return true;

            return false;
        }

        bool isBoardFull() 
        {
            for (auto& row : board) 
            {
                for (auto& cell : row) 
                {
                    if (cell == ' ')
                    {
                        return false;
                    }
                }
            }
            return true;
        }

        void switchPlayer() 
        {
            if (currentPlayer == 'X') 
            {
                currentPlayer = 'O';
            }

            else 
            {
                currentPlayer = 'X';
            }
        }

        void playGame() 
        {
            int row, col;

            while (true) 
             {
                printBoard();

                cout << "Player " << currentPlayer << ", enter your move (row and column: 0, 1, or 2 - Ex: 0 1): ";
                cin >> row >> col;

                if (!makeMove(row, col)) 
                {
                    cout << "Invalid move. Try again.\n";
                    continue;
                }

                if (checkWin()) 
                {
                    printBoard();
                    cout << "Player " << currentPlayer << " wins!\n";
                    break;
                }

                if (isBoardFull()) 
                {
                    printBoard();
                    cout << "It's a tie!\n";
                    break;
                }

                switchPlayer();
            }
        }
};

int main() 
{
    TicTacToe game;
    game.playGame();
    return 0;
}