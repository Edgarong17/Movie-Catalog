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
    std::string Info="ID:" + std::to_string(get_ID()) + "\n" + "Name:" + get_Name() + "\n" + "Time:" + get_Time() +
                       "\n" + "Gender:" + get_Gender() + "\n" + "Grade:";
    std::cout << Info;
    std::cout << std::fixed << std::setprecision(2) << get_Average() << std::endl;
                       
    Info="Chapter:"+std::to_string(Chapter)+"\n"+"Chapter Name:"+ChapterName+"\n"+"Season:"+Season+"\n"+"Season Name:"+SeasonName+"\n";
    std::cout<<Info<<std::endl;
}

void Serie::Show_Video() {
    std::string Info="Chapter:"+std::to_string(Chapter)+"\n"+"Chapter Name:"+ChapterName+"\n"+"Season:"+Season+"\n"+"Season Name:"+SeasonName+"\n";
    std::cout<<Info<<std::endl;
}

void Serie::set_Chapter(int Chapter_) {
    Chapter = Chapter_;
}

void Serie::set_Season(std::string Season_) {
    Season = Season_;
}

void Serie::set_SeasonName(std::string SeasonName_) {
    SeasonName = SeasonName_;
}

void Serie::set_ChapterName(std::string ChapterName_) {
    ChapterName = ChapterName_;
}

int Serie::get_Chapter() {
    return Chapter;
}

std::string Serie::get_Season() {
    return Season;
}

std::string Serie::get_SeasonName() {
    return SeasonName;
}

std::string Serie::get_ChapterName() {
    return ChapterName;
}