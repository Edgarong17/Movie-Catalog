#include "include/Video.hpp"

int main() {
    video Primero (1,"Hola","1:20:20","Accion",7);
    Primero.Show_Information();
    Primero.Show_Video();
    Primero.Grade_Video(4);
    return 0;
}