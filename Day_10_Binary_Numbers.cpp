#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));

    int max_consecutive = 0, current = 0;
    while (n > 0) {
        if (n & 1) {
            current++;
            max_consecutive = max(max_consecutive, current);
        } else {
            current = 0;
        }
        n >>= 1;
    }

    cout << max_consecutive;
    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(),
            find_if(s.begin(), s.end(),
                    not1(ptr_fun<int, int>(isspace))));
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(),
                    not1(ptr_fun<int, int>(isspace))).base(),
            s.end());
    return s;
}
