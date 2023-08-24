#include <iostream>
#include <unistd.h>

using namespace std;

bool AND(int a, int b) {
    return (a == 1 && b == 1);
}

bool OR(int a, int b) {
    return (a == 1 || b == 1);
}

bool NOT(int a) {
    return !a;
}

int main() {
    bool a, b;
    int c, res;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "What do you want to do?" << endl;
    sleep(1);
    cout << "1. AND" << endl;
    sleep(1);
    cout << "2. OR" << endl;
    sleep(1);
    cout << "3. NOT" << endl;
    sleep(1);
    cout << "4. NAND" << endl;
    sleep(1);
    cout << "5. NOR" << endl;
    sleep(1);
    cout << "enter your choice : ";
    cin >> c;

    switch (c) {
        case 1:
            res = AND(a, b);
            cout << "The result of the AND operation is: " << res;
            break;
        case 2:
            res = OR(a, b);
            cout << "The result of the OR operation is: " << res;
            break;
        case 3:
            cout<<"1(a) or 2(b) :";
            cin>>c;
            switch(c){
                case 1:
                res = NOT(a);
                case 2:
                res = NOT(b);
            }
            cout << "The result of the NOT operation is: " << res;
            break;
        case 4:
            res = AND(a, b);
            res = NOT(res);
            cout << "The result of the NAND operation is: " << res;
            break;
        case 5:
            res = OR(a, b);
            res = NOT(res);
            cout << "The result of the NOR operation is: " << res;
            break;
        default:
            cout << "Invalid choice.";
    }

    return 0;
}
