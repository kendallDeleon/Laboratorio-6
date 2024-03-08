#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria {
private:
    string nombreTitular;
    string numeroCuenta;
    float saldo;

public:
    void setNombreTitular(string n) {
        nombreTitular = n;
    }

    void setNumeroCuenta(string num) {
        numeroCuenta = num;
    }

    void setSaldo(float s) {
        saldo = s;
    }

    void depositar(float cantidad) {
        saldo += cantidad;
    }

    void retirar(float cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            cout << "Saldo insuficiente" << endl;
        }
    }

    float consultarSaldo() {
        return saldo;
    }
};

int main() {
    CuentaBancaria cuenta;
    cuenta.setNombreTitular("Juan Perez");
    cuenta.setNumeroCuenta("123456789");
    cuenta.setSaldo(1000);
    cuenta.depositar(500);
    cuenta.retirar(200);
    cout << "Saldo actual: " << cuenta.consultarSaldo() << endl;
    return 0;
}
