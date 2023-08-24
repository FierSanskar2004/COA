#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int bin[7];
    cout << "Enter binary numbers (0 or 1)." << endl;

    for (int i = 0; i < 7; i++) {
        cin >> bin[i];
        while (bin[i] != 0 && bin[i] != 1) {
            cout << "Error! Input not in binary range (0 or 1)." << endl;
            cin >> bin[i];
        }
    }

    cout << "You entered the following binary numbers:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << bin[i];
    }

    int a = 0;
    for (int i = 6; i >= 0; i--) {
        a += bin[i] * pow(2, 6 - i);
    }
  if(a<33){
    a=33;
  }
  else if(a==127){
    a=126;
  }
    
    cout << endl << a << endl;
    cout << char(a) << endl;
    return 0;
}
