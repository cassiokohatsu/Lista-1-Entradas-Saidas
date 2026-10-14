#include <iostream>

using namespace std;

int main(){
    int p1, p2, p3, p4, p5, pag, t;

    cout << "Valor do Produto 1: ";
    cin >> p1;
    cout << "Valor do Produto 2: ";
    cin >> p2;
    cout << "Valor do Produto 3: ";
    cin >> p3;
    cout << "Valor do Produto 4: ";
    cin >> p4;
    cout << "Valor do Produto 5: ";
    cin >> p5;
    cout << "Pagamento: ";
    cin >> pag;

    t = (p1 + p2 + p3 + p4 + p5) - pag;

    cout << "Seu troco e de: " << t;
}