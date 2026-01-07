#include <iostream>
#include <string>

using namespace std;

void generateBinary(int n, string current) {

    if (current.length() == n) {
        cout << current << "\n";
        return;
    }
    generateBinary(n, current + "0");

    generateBinary(n, current + "1");
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    generateBinary(N, "");

    return 0;
}
