#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int f = b % 3;

        if (f + c >= 3 || f == 0) {
            cout << a + ceil((b + c) / 3.0) << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
