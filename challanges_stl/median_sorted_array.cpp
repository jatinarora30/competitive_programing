//Didn't passed all test cases

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n < 1000 && n > 0) {
        vector<int> v;
        
        for (int i = 0; i < 2 * n; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        
        sort(v.begin(), v.end());
        
        int medianIndex = (n - 1);  
        cout << v[medianIndex];
    }
    
    return 0;
}
