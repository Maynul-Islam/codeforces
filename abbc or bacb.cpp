#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int coins = 0;
        int length = s.length();


        for (int i = 0; i < length - 1; i++) {
            if (s[i] == 'A' && s[i + 1] == 'B') {
                coins++;
                i++;
            } else if (s[i] == 'B' && s[i + 1] == 'A') {
                coins++;
                i++;
            }
        }

        cout << coins << endl;
    }

    return 0;
}
