#include <iostream>
using namespace std;

int main() {
    int P[60];
    for(int i=0; i<60; i++) {
        P[i] = 100 - i;
        cout << P[i] << " ";
    }
    return 0;
}
