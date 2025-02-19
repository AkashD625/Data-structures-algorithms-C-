#include <iostream>
#include <string>
using namespace std;

int countCharacterOccurrences(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "DESKNINE";
    char ch = 'E';
    
    int result = countCharacterOccurrences(str, ch);
    cout << "The character '" << ch << "' occurs " << result << " time(s) in the string." << endl;
    
    return 0;
}
