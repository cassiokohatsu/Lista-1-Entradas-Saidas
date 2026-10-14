#include <iostream>

using namespace std;

int main(){
    int d, c, r;

    cout << "Digite a quantidade de dolars: ";
    cin >> d;
    cout << "Digite a cotacao de dolars: ";
    cin >> c;

    r = d * c;

    cout << d << "dolares == " << r << " reais" << endl;
}