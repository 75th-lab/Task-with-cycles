#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a;
    cin >> b;
    if (a > b) {
    do {
        a -= b;
    } while (a - b >= 0);

    cout << "Ostatok: " << a << endl;
    } else {
      cout << "Problem" << endl;
    }
return 0;
}