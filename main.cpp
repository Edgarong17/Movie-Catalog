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
    std::cout<<std::endl;

    video Segundo (1,"dias","1:20:20","Accion",1);
    if(Primero>Segundo){
        std::cout<<"Primero es mayor"<<std::endl;
    }
    else{
        std::cout<<"Segundo es mayor"<<std::endl;
    }
    return 0;
}