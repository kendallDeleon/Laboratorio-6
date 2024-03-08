#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anoPublicacion;

public:
    void setTitulo(string t) {
        titulo = t;
    }

    void setAutor(string a) {
        autor = a;
    }

    void setAnoPublicacion(int ano) {
        anoPublicacion = ano;
    }

    void mostrarInformacion() {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de publicación: " << anoPublicacion << endl;
    }
};

int main() {
    Libro libro;
    libro.setTitulo("El señor de los anillos");
    libro.setAutor("J.R.R. Tolkien");
    libro.setAnoPublicacion(1954);
    libro.mostrarInformacion();
    return 0;
}
