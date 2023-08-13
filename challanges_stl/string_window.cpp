#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string s1, s2;
    string sub;
    getline(cin, s1);
    getline(cin, s2);

    if (s2.size() > s1.size()) {
        cout << "No String";
    } else {
        int hash_pat[256] = {0};
        int hash_str[256] = {0};
        for (int i = 0; i < s2.size(); i++) {
            hash_pat[s2[i]]++;
        }
        int start = 0;
        int start_index = -1;
        int count = 0;
        int min_length = 9999;
        for (int i = 0; i < s1.size(); i++) {
            hash_str[s1[i]]++;
            if (hash_pat[s1[i]] >= hash_str[s1[i]]) {
                count++;
            }
            if (count == s2.size()) {
                while (hash_str[s1[start]] > hash_pat[s1[start]] || hash_pat[s1[start]] == 0) {
                    if (hash_str[s1[start]] > hash_pat[s1[start]])
                        hash_str[s1[start]]--;
                    start++;
                }

                int len_window = i - start + 1;
                if (min_length > len_window) {
                    min_length = len_window;
                    start_index = start;
                }
            }
        }
        if (start_index == -1) {
            cout << "No String";
        } else {
            cout << s1.substr(start_index, min_length);  // Print the substring
        }
    }

    return 0;
}
