#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4, md;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite o terceiro numero: ";
    cin >> n3;
    cout << "Digite o quarto numero: ";
    cin >> n4;

    md = (n1 + n2 + n3 + n4) / 4;

    cout << "A media e: " << md << endl;
}