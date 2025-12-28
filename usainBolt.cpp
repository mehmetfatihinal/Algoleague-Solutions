#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int number; cin>>number;
    int arr[100000];
    int count = 0;
    for(int i=0;i<number;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<number;i++){
        if (arr[i]>max){
            max = arr[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}