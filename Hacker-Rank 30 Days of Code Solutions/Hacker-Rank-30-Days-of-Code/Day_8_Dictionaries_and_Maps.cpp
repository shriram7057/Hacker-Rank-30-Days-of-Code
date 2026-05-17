#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, string> phonebook;
    for (int i = 0; i < n; i++) {
        string name, number;
        cin >> name >> number;
        phonebook[name] = number;
    }

    string query;
    while (cin >> query) {
        auto it = phonebook.find(query);
        if (it != phonebook.end()) {
            cout << it->first << "=" << it->second << "\n";
        } else {
            cout << "Not found\n";
        }
    }

    return 0;
}
