#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(char elem : str){
        cout << elem << endl;
    }
    return 0;
}