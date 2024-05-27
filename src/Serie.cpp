#include "../include/Serie.hpp"
#include "../include/Video.hpp"

Serie::Serie(int ID_, std::string Name_, std::string Time_, std::string Gender_, float Grade_, int Chapter_, std::string Season_, std::string SeasonName_, std::string ChapterName_) : video(ID_, Name_, Time_, Gender_, Grade_)
{
    Chapter = Chapter_;
    Season = Season_;
    SeasonName = SeasonName_;
    ChapterName = ChapterName_;
}

void Serie::Show_Information() {
    std::string Info="Chapter:"+std::to_string(Chapter)+"\n"+"Chapter Name:"+ChapterName+"\n"+"Season:"+Season+"\n"+"Season Name:"+SeasonName+"\n";
    std::cout<<Info<<std::endl;
}
