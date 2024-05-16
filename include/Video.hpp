#include <iostream>
#include <string>

#ifndef VIDEO_HPP
#define VIDEO_HPP

class video
{
private:
    int ID=0;
    std::string Name="";
    std::string Time="";
    std::string Gender="";
    float Grade=0;
    bool Estatus=true;
public:
    video(int ID_,std::string Name_,std::string Time_, std::string Gender_, float Grade_);
    void Show_Information();
    void Show_Video();
    void Grade_Video(float Grade2);

    void set_ID(int ID_);
    void set_Time(std::string Time_);
    void set_Name(std::string Name_);
    void set_Gender(std::string Gender_);
    void set_Grade(float Grade_);
    void set_Estatus(bool Estatus_);

    int get_ID();
    std::string get_Time();
    std::string get_Name();
    std::string get_Gender();
    float get_Grade();
    bool get_Estatus();
};

#endif
