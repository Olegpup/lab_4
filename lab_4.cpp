#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double result = 0;
    int x = 0, n = 0, f = 1, m = 0;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n - 1; i++) {
        if (i != 0 && i != 1) {
            m = i;
            f = 1;
            while (m > 0) {
                f *= m;
                m--;
            }
        }
        else {
            f = 1;
        }
        result += pow(x, i - 1) / f;
        f = 0;
    }
    cout << result << endl;
    return 0;
}
