#include "include/Video.hpp"
#include "include/Serie.hpp"


int main() {
    // Prueba de la clase serie
    Serie PrimeraSerie(1, "Animal", "1:20:20", "Comedy", 5, 1, "Season 1", "Prelude", "Chapter 1");

    
    //Se llama a la funcion virtual
    PrimeraSerie.Show_Information();
    //Se llamara otra funcion virtual en grade video
    PrimeraSerie.Grade_Video();
    
    PrimeraSerie.set_Chapter(2);
    PrimeraSerie.set_Season("Season 2");
    PrimeraSerie.set_SeasonName("The return of the animals");
    PrimeraSerie.set_ChapterName("Chapter 2");
    PrimeraSerie.Show_Information();

    PrimeraSerie.Show_Video();
    //Prueba de la clase video
    video Primero(1, "Hola", "1:20:20", "Comedi", 2);
    std::cout << std::endl;
    Primero.Show_Information();
    std::cout << std::endl;
    Primero.Show_Video();
    std::cout << std::endl;
    Primero.Grade_Video();
    std::cout << std::endl;
    //Se prueba la sobrecarga de operadores con la clase base y la heredada
    if (Primero > PrimeraSerie) {
        std::cout << "Primero has a higher rating than PrimeraSerie" << std::endl;
    } else {
        std::cout << "Primero has a lower rating than PrimeraSerie" << std::endl;
    }


    return 0;
}