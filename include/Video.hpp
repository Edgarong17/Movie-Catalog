#include <iostream>
#include <string>

class video
{
private:
    int ID=0;
    std::string Name="";
    std::string Time="";
    std::string Gender="";
    float Grade=0;
public:
    video(int ID_,std::string Name_,std::string Time, std::string Gender_, float Grade_);
    ~video();
    void Show_Information();
    void Show_Video();
    void Average();
    void Grade_Video();
};
