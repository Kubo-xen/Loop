#include <iostream>
using namespace std;

int main() {

    int i = 5;

    while(i > 0) {
        cout << "Hello World with while" << endl;
        i--;
    }

    for (i = 0; i < 5; i++) {
        cout << "Hello World with for" << endl;
    }

    return 0;
}