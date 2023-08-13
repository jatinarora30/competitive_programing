#include<iostream>
#include <string>
#include <vector>
#include <algorithm>  
using namespace std;

bool customSort(string a, string b) {
    int s1 = a.size();
    int s2 = b.size();
    int i;
    for (i = 0; i < min(s1, s2); i++) {
        if (b[i] != a[i]) {
            break;
        }
    }
	
    if (i == min(s1, s2)) {
        return s2<s1;
    } else {
        return a < b;
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    
    sort(v.begin(), v.end(), customSort);
    
    for (const string &s : v) {
        cout << s << "\n";
    }
    
    return 0;
}
