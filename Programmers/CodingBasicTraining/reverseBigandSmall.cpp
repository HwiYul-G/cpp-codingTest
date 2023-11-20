#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    for(char elem : str){
        char current_char = ' ';
        if(elem >= 'A' && elem <= 'Z'){
            current_char = (int)elem - 'A' + 'a';
        }
        else if(elem >= 'a' && elem <= 'z'){
            current_char = (int)elem - 'a' + 'A';
        }
        cout << current_char;
    }
    return 0;
}