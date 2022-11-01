#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

const int
    N = 9,
    D = 10;

bool canSlideL(int board[][4]) {

    // for each row r {
    for (int row=0;row<4;row++) {

        // for col = 3,2,1 {
        for (int col=3;col>0;col--) {

            // if board[row][col] == 0 continue
            if (board[row][col] == 0)
                continue;

            // if board[row][col] == board[row][col-1] return true

            // if board[row][col-1] == 0 return true

            // end col loop
        }

        // end row loop
    }

    // return false, can't slide left
    return false;
}

bool canSlideR(int board[][4]) {

    // for each row r {

        // for col = 0,1,2 {

            // if board[row][col] == 0 continue

            // if board[row][col] == board[row][col+1] return true

            // if board[row][col+1] == 0 return true

        // end col loop

    // end row loop

    // return false, can't slide right
}

bool canSlideU(int board[][4]) {

}

bool canSlideD(int board[][4]) {

}

void slideL(int board[][4],int &score) {

}

void slideR(int board[][4],int &score) {

}

void slideU(int board[][4],int &score) {

}

void slideD(int board[][4],int &score) {

}

void fillCell(int board[][4]) {
    int
        row,col,
        n=0,
        randVal;
    random_device
        rd;
    mt19937
        mt(rd());

    // count empty squares (n)
    for (row=0;row<4;row++)
        for (col=0;col<4;col++)
            if (board[row][col] == 0)
                n++;

    // choose random number between 1 and n
    uniform_int_distribution
        dis1(1,n);

    randVal = dis1(mt);

    row = col = 0;
    // scan board, while randVal > 0
    while (true) {

        // if cell is empty, subtract 1 from randVal
        if (board[row][col] == 0)
            randVal--;

        // if randVal == 0, break
        if (randVal == 0)
            break;

        // move to next cell
        col++;
        if (col == 4) {
            row++;
            col = 0;
        }
    }

    // choose random number from 1 to D
    uniform_int_distribution
        dis2(1,D);

    randVal = dis2(mt);

    // if randVal > N, fill cell with 4, else fill cell with 2
}

void displayBoard(int board[][4],int score) {

    cout << "\033[2J\033[H";    // clear screen

    cout << "Score: " << score << endl; // show score

    // loop over all rows
    for (int r=0;r<4;r++) {
        // top border plus top space
        cout << "+--------+--------+--------+--------+\n"
                "|        |        |        |        |" << endl;
        // output each column
        for (int c=0;c<4;c++)
            if (board[r][c] != 0)
                cout << "| " << setw(6) << board[r][c] << ' ';
            else
                cout << "|        ";
        // bottom space
        cout << "|\n|        |        |        |        |" << endl;
    }

    // bottom border
    cout << "+--------+--------+--------+--------+" << endl;
}

int main() {
    int
        board[4][4] = {0},
        score = 0;
    string
        moves;
    char
        ch;

    // initialize the game board

    // do {
    do {

        displayBoard(board,score);

        // check for slide directions
        moves = "";
        if (canSlideU(board))
            moves += 'u';
        if (canSlideD(board))
            moves += 'd';
        if (canSlideL(board))
            moves += 'l';
        if (canSlideR(board))
            moves += 'r';

        // if no slides available, break
        if (moves == "")
            break;

        // get a move
        cout << "Enter move [q" << moves << "]: ";
        cin >> ch;

        // apply move
        if (ch == 'u' && canSlideU(board))
            slideU(board,score);

        // } end loop
    } while (ch != 'q' && ch != 'Q');

    // show final score
    cout << "Final score: " << score << endl;

    return 0;
}