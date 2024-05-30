#include "Video.hpp"
#ifndef Serie_HPP
#define Serie_HPP
class Serie: public video
{
private:
    int Chapter=0;
    std::string Season="";
    std::string SeasonName="";
    std::string ChapterName="";
public:
    Serie(int ID_,std::string Name_,std::string Time_, std::string Gender_, float Grade_,int Chapter_,std::string Season_,std::string SeasonName_,std::string ChapterName_);
    void Show_Information() override;
    void Show_Video() override;

    void set_Chapter(int Chapter_);
    void set_Season(std::string Season_);
    void set_SeasonName(std::string SeasonName_);
    void set_ChapterName(std::string ChapterName_);
    
    int get_Chapter();
    std::string get_Season();
    std::string get_SeasonName();
    std::string get_ChapterName();

};

#endif