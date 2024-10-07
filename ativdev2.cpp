#include <iostream>
using namespace std;

bool pertenceFibonacci(int num) {
    int a = 0, b = 1, prox = 0;

    if (num == 0 || num == 1)
        return true;

    while (prox < num) {
        prox = a + b;
        a = b;
        b = prox;
    }


    return (prox == num);
}

int main() {
    int numero;
    
    cout << "Informe um numero para verificar se pertence a sequencia de Fibonacci: ";
    cin >> numero;

    if (pertenceFibonacci(numero)) {
        cout << "O numero " << numero << " pertence a sequencia." << endl;
    } else {
        cout << "O numero " << numero << " nao pertence a sequência." << endl;
    }

    return 0;
}

