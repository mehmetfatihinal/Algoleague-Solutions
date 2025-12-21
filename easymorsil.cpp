#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    long long sum = 0;

    for (long long k = 1; k <= N; k += 2) {
        long long temp = k;
        int count = 0;

        while (temp <= N) {
            count++;
            temp <<= 1; 
        }

        sum += k * count;
    }

    cout << sum << "\n";
    return 0;
}
