#include "include/Video.hpp"

int main() {
    //Prueba
    video Primero (1,"Hola","1:20:20","Comedi",7);
    std::cout<<std::endl;
    Primero.Show_Information();
    std::cout<<std::endl;
    Primero.Show_Video();
    std::cout<<std::endl;
    Primero.Grade_Video();
    std::cout<<std::endl;
    Primero.Show_Video();
    std::cout<<std::endl;

    video Segundo (1,"dias","1:20:20","Aventure",1);
    if(Primero>Segundo){
        std::cout<<"Primero has a higher rating than Segundo" <<std::endl;
    }
    else{
        std::cout<<"Primero has a lower rating than Segundo"<<std::endl;
    }

    video Tercero(2, "Movie Title", "2:30:00", "Action", 4);
    if (Primero < Tercero) {
        std::cout << "Primero has a lower rating than Tercero" << std::endl;
    } else {
        std::cout << "Primero has a higher rating than Tercero" << std::endl;
    }

    return 0;
}