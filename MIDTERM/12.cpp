#include <iostream>
using namespace std;

int main() {
    long long d, c, n, di, ci;
    cin >> d >> c >> n >> di >> ci;
    long long sum = d*100 + c;
    long long sum2 = di*100 + ci;
    long long diff = sum2 - n * sum;
    d = diff/100;
    c = diff%100;
    if (diff < 0) {
        cout << -1;
    }
    else cout << d << " " << c;
}