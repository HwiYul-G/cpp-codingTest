#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    vector<char> vec(my_string.begin(), my_string.end());
    for(int i = 0; i < overwrite_string.length(); i++){
        vec[s + i] = overwrite_string[i];
    }
    return string(vec.begin(), vec.end());
}