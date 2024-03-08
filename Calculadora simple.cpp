#include <iostream>
using namespace std;

class Calculadora {
private:
    float num1;
    float num2;

public:
    void setNumeros(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }

    float sumar() {
        return num1 + num2;
    }

    float restar() {
        return num1 - num2;
    }

    float multiplicar() {
        return num1 * num2;
    }

    float dividir() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: división por cero" << endl;
            return 0;
        }
    }
};

int main() {
    Calculadora calculadora;
    calculadora.setNumeros(10, 5);
    cout << "Suma: " << calculadora.sumar() << endl;
    cout << "Resta: " << calculadora.restar() << endl;
    cout << "Multiplicación: " << calculadora.multiplicar() << endl;
    cout << "División: " << calculadora.dividir() << endl;
    return 0;
}
