#include <iostream>
using namespace std;

int main () {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            ans |= x;
        }
        cout << ans << endl;
    }
}