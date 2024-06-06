#include "../include/Video.hpp"

video::video(int ID_, std::string Name_, std::string Time_, std::string Gender_, float Grade_) {
    ID = ID_;
    Name = Name_;
    Time = Time_;
    Gender = Gender_;
    if (Grade_ > 5 || Grade_ < 1) {
        while (Grade_ > 5 || Grade_ < 1) {
            std::cout << "Place a Grade between 1-5" << std::endl;
            std::cin >> Grade_;
        }
    }
    Average = Grade_;
    Grade.push_back(Grade_);
}

void video::Show_Information() {
    std::string Info = "ID:" + std::to_string(ID) + "\n" + "Name:" + Name + "\n" + "Time:" + Time +
                       "\n" + "Gender:" + Gender + "\n" + "Grade:";
    std::cout << Info;
    std::cout << std::fixed << std::setprecision(2) << Average << std::endl;
}

void video::Show_Video() {
    std::string Info = "Name:" + Name + "\n" + "Grade:";
    std::cout << Info;
    std::cout << std::fixed << std::setprecision(2) << Average << std::endl;
}

void video::Grade_Video() {
    std::cout << "You are grading this video: " + Name << std::endl;
    float Grade_;
    std::cout << "Place your rating: ";
    std::cin >> Grade_;
    system("clear");
    if (Grade_ > 5 || Grade_ < 1) {
        while (Grade_ > 5 || Grade_ < 1) {
            std::cout << "Place a Grade between 1-5" << std::endl;
            std::cin >> Grade_;
        }
    }
    Grade.push_back(Grade_);
    system("clear");
    std::cout << "Grade placed" << std::endl;
    Calculate_Average();
    Show_Video();
}

void video::set_ID(int ID_) { ID = ID_; }

void video::set_Time(std::string Time_) { Time = Time_; }

void video::set_Name(std::string Name_) { Name = Name_; }

void video::set_Gender(std::string Gender_) { Gender = Gender_; }

void video::set_Average(float Average_) { Average = Average_; }

void video::set_Estatus(bool Estatus_) { Estatus = Estatus_; }

void video::Calculate_Average() {
    float Sum = 0;
    for (int i = 0; i < Grade.size(); i++) {
        Sum += Grade[i];
    }
    Average = Sum / Grade.size();
}

int video::get_ID() { return ID; }

std::string video::get_Time() { return Time; }

std::string video::get_Name() { return Name; }

std::string video::get_Gender() { return Gender; }

float video::get_Average() { return Average; }

bool video::get_Estatus() { return Estatus; }

bool operator>(const video Video1, const video Video2) {
    if (Video1.Average < Video2.Average) {
        return true;
    }
    return false;
}

bool operator<(const video Video1, const video Video2) {
    if (Video1.Average > Video2.Average) {
        return true;
    }
    return false;
}