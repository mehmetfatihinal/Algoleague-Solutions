#include <iostream>         // SOLVED
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    long long int number; cin>>number;
    string str;
    cin>>str;
    for(long long int i=0;i<number;i++){
        if (str[i]!=str[i+1]){
            cout<<str[i];
        }
    }
    return 0;
}