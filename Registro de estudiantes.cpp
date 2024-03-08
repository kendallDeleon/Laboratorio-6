#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    string apellido;
    int edad;
    string curso;

public:
    void setNombre(string n) {
        nombre = n;
    }

    void setApellido(string a) {
        apellido = a;
    }

    void setEdad(int e) {
        edad = e;
    }

    void setCurso(string c) {
        curso = c;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {
    Estudiante estudiante;
    estudiante.setNombre("Juan");
    estudiante.setApellido("Perez");
    estudiante.setEdad(20);
    estudiante.setCurso("Ingeniería");
    estudiante.mostrarInformacion();
    return 0;
}
