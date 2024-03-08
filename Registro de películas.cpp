#include <iostream>
#include <string>
using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    int anoLanzamiento;

public:
    void setTitulo(string t) {
        titulo = t;
    }

    void setDirector(string d) {
        director = d;
    }

    void setAnoLanzamiento(int ano) {
        anoLanzamiento = ano;
    }

    void mostrarInformacion() {
        cout << "Título: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Año de lanzamiento: " << anoLanzamiento << endl;
    }
};

int main() {
    Pelicula pelicula;
    pelicula.setTitulo("Inception");
    pelicula.setDirector("Christopher Nolan");
    pelicula.setAnoLanzamiento(2010);
    pelicula.mostrarInformacion();
    return 0;
}
