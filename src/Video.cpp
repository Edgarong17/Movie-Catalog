#include "../include/Video.hpp"


video::video(int ID_, std::string Name_, std::string Time_, std::string Gender_, float Grade_) {
    ID=ID_;
    Name=Name_;
    Time=Time_;
    Gender=Gender_;
    if (Grade_>5 || Grade_<1){
        while(Grade_>5 || Grade_<1){
            std::cout<<"Place a Grade between 1-5"<<std::endl;
            std::cin>>Grade_;
        }
    }
    Grade=Grade_;
}

void video::Show_Information() {
    std::string Info= "ID:"+std::to_string (ID)+" ,Name:"+Name+" ,Time:"+Time+" ,Gender:"+Gender+" ,Grade:"+std::to_string (Grade);
    std::cout<<Info<<std::endl;
}

void video::Show_Video() {
    std::string Info= "Name:"+Name+" ,Grade:"+std::to_string (Grade);
    std::cout<<Info<<std::endl;
}

void video::Grade_Video(float Grade2) {
    if (Grade2>5 || Grade2<1){
        while(Grade2>5 || Grade2<1){
            std::cout<<"Place a Grade between 1-5"<<std::endl;
            std::cin>>Grade2;
        }
    }
    Grade=(Grade2+Grade)/2;
}

void video::set_ID(int ID_) {
    ID=ID_;
}

void video::set_Time(std::string Time_) {
    Time=Time_;
}

void video::set_Name(std::string Name_) {
    Name=Name_;
}

void video::set_Gender(std::string Gender_) {
    Gender=Gender_;
}

void video::set_Grade(float Grade_) {
    Grade=Grade_;
}

void video::set_Estatus(bool Estatus_) {
    Estatus=Estatus_;
}

int video::get_ID() { return ID; }

std::string video::get_Time() { return Time; }

std::string video::get_Name() { return Name; }

std::string video::get_Gender() { return Gender; }

float video::get_Grade() { return Grade; }

bool video::get_Estatus() { return Estatus; }
