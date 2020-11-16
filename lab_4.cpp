#include <iostream>
#include <cmath>
using namespace std;

int Fact(int k) {
    if (k == 0)
        return 1;
    if (k == 1)
        return 1;
    return k * Fact(k - 1);
}

int main() {
    double x, a, result = 0;
    int m, n;
    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter n: " << endl;
    cin >> m;
    for (n = 1; n <= m; n += 1) {
        a = pow(x, n - 1) / Fact(n - 1);
        result += a;
    }
    cout << "Result:" << result;
}
