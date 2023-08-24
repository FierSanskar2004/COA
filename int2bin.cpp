#include <iostream>
#include <cmath>
using namespace std;

void decimalToBinary(int num, int arr[]) {
    int index = 0;
    while (num > 0) {
        arr[index++] = num % 2;
        num /= 2;
    }
}

int main() {
    int n, arr[10] = {0};
    cout << "Enter decimal number : ";
    cin >> n;
        decimalToBinary(n, arr);
        
        cout << n << " - ";
        for (int j = 9; j >= 0; j--) {
            cout << arr[j];
        }
        cout << endl;
    
    return 0;
}

