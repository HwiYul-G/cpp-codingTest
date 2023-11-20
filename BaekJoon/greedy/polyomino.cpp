#include <iostream>
#include <string>

using namespace std;

int main() {
    string board, result;
    cin >> board;

    for (int i = 0; i < board.size(); i++) {
        if (board[i] == 'X') {
            if (i + 3 < board.size() && board.substr(i, 4) == "XXXX") {
                board.replace(1, 4, "AAAA");
                i += 3;
            } else if (i + 1 < board.length() && board.substr(i, 2) == "XX") {
                board.replace(i, 2, "BB");
                i += 1;
            } else {
                board = "-1";
                break;
            }
        }
    }
    cout << board << endl;

    return 0;
}