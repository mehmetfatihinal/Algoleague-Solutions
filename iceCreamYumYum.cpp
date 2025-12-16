#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n; cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i =0;i<n;i++){
        if (min>arr[i]) min = arr[i];
    }
    int toplam = 0;
    for(int i =0;i<n;i++){
        toplam+=arr[i];
    }
    cout<<toplam-min;
    return 0;
}