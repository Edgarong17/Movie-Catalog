#include "include/Video.hpp"

int main() {
    //Prueba
    video Primero (1,"Hola","1:20:20","Accion",7);
    std::cout<<std::endl;
    Primero.Show_Information();
    std::cout<<std::endl;
    Primero.Show_Video();
    std::cout<<std::endl;
    Primero.Grade_Video();
    std::cout<<std::endl;
    Primero.Show_Video();
    return 0;
}