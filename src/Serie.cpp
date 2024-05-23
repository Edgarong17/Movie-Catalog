#include "../include/Serie.hpp"
#include "../include/Video.hpp"

Serie::Serie(int ID_, std::string Name_, std::string Time_, std::string Gender_, float Grade_, int Chapter_, std::string Season_, std::string SeasonName_) : video(ID_, Name_, Time_, Gender_, Grade_)
{
    Chapter = Chapter_;
    Season = Season_;
    SeasonName = SeasonName_;
}

void Serie::Show_Video_Information() {
    std::string Info="Video Chapter:"+std::to_string(Chapter)+"\n"+"Season:"+Season+"\n"+"Season Name:"+SeasonName+"\n";
    std::cout<<Info<<std::endl;
}
