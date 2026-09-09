#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long power(long long a, long long b, long long n) {
    long long r = 1;
    while (b--)
        r = (r * a) % n;
    return r;
}

int main() {
    long long p, q, n, phi, e, d, m, c;

    cout << "Enter two prime numbers: ";
    cin >> p >> q;

    n = p * q;
    phi = (p - 1) * (q - 1);

    for (e = 2; e < phi; e++)
        if (gcd(e, phi) == 1)
            break;

    for (d = 1; d < phi; d++)
        if ((e * d) % phi == 1)
            break;

    cout << "Public Key  = (" << e << ", " << n << ")\n";
    cout << "Private Key = (" << d << ", " << n << ")\n";

    cout << "Enter message (< " << n << "): ";
    cin >> m;

    c = power(m, e, n);
    cout << "Encrypted = " << c << endl;

    m = power(c, d, n);
    cout << "Decrypted = " << m << endl;

    return 0;
}
