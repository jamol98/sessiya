#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, z;
    double result;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "z = "; cin >> z;
    result = pow(a, 3) * (z + 2) * (27 - z) * b + 0.1 * pow(10, -7);
    cout << result;
    return 0;
}