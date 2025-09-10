#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    if (m == 0) {
        return -2;
    }

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}

int main() {
    string text, pattern;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern: ";
    getline(cin, pattern);

    int result = findSubstring(text, pattern);

    if (result == -1) {
        cout << "Pattern not found" << endl;
    }
    else if (result == -2) {
        cout << "Empty pattern provided" << endl;
    } 
    else {
        cout << "Pattern found at index " << result << endl;
    }

    return 0;
}
