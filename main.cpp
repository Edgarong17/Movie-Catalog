#include "include/Video.hpp"
#include "include/Serie.hpp"
bool filtrado(video video, std::string a) {
    return video.get_Gender()== a;  // Change this to your desired condition
}

int main() {
    // Prueba de la clase serie
    std::vector<video> Peliculas;
    // Video ( int ID, std::string Name, std::string Time, std::string gender, float Grade)
    Peliculas.push_back(video (1,"Titanic", "2:45:00", "Drama", 4));
    Peliculas.push_back(video(2,"The Shawshank Redemption", "2:22:00", "Drama",3));
    Peliculas.push_back(video (3,"The Godfather", "2:55:00", "Crime",4));
    Peliculas.push_back(video (4,"Pulp Fiction", "2:34:00", "Crime",2));
    Peliculas.push_back(video (5,"The Dark Knight", "2:32:00", "Action",4));
    //Se crea un vector de series
    std::vector<Serie> Series;
    // Agregar las series en un vector int ID, std::string Name, std::string Time, std::string gender, float Grade,int chapter,int season, string season name, string ChapterName_

    //Primera serie
    Series.push_back(Serie(6, "Breaking Bad", "0:58:00", "Comedy", 5, 1, 1, "Temporada 1 (2008)", "Pilot"));
    Series.push_back(Serie(7, "Breaking Bad", "0:47:00", "Comedy", 5, 7, 1, "Temporada 1 (2008)", "A No-Rough-Stuff-Type Deal"));
    Series.push_back(Serie(8, "Breaking Bad", "0:47:00", "Comedy", 5, 2, 3, "Temporada 3 (2010)", "Caballo sin Nombre"));
    Series.push_back(Serie(9, "Breaking Bad", "0:47:00", "Comedy", 5, 8, 2, "Temporada 2 (2009)", "Better Call Saul"));
    Series.push_back(Serie(10, "Breaking Bad", "0:47:00", "Comedy", 5, 11, 2, "Temporada 2 (2009)", "Mandala"));

    //Segunda serie
    Series.push_back(Serie(11, "One Punch Man", "0:24:00", "Comedy", 5, 4, 1, "Temporada 1 (2015)", "El ninja moderno"));
    Series.push_back(Serie(12, "One Punch Man", "0:24:00", "Comedy", 5, 1, 1, "Temporada 1 (2015)", "El hombre más poderoso del mundo"));
    Series.push_back(Serie(13, "One Punch Man", "0:24:00", "Comedy", 5, 10, 1, "Temporada 1 (2015)", "Peligro sin precedentes"));
    Series.push_back(Serie(14, "One Punch Man", "0:24:00", "Comedy", 5, 2, 2, "Temporada 2 (2019)", "El kaijin humano"));
    Series.push_back(Serie(15, "One Punch Man", "0:24:00", "Comedy", 5, 12, 2, "Temporada 2 (2019)", "El castigo al trasero del discípulo"));

    //Tercera serie
    Series.push_back(Serie(16, "Pokémon: Liga índigo", "0:23:00", "Comedy", 5, 42, 1, "Temporada 1 (1997)", "¡La canción de Jigglypuff!"));
    Series.push_back(Serie(17, "Pokémon: Liga índigo", "0:23:00", "Comedy", 5, 19, 1, "Temporada 1 (1997)", "¡El Fantasma del Pico de la Doncella!"));
    Series.push_back(Serie(18, "Pokémon: Liga índigo", "0:23:00", "Comedy", 5, 20, 1, "Temporada 1 (1997)", "Adiós, Butterfree"));
    Series.push_back(Serie(19, "Pokémon: Liga índigo", "0:23:00", "Comedy", 5, 47, 1, "Temporada 1 (1997)", "¿Quién se queda con Togepi?"));
    Series.push_back(Serie(20, "Pokémon: Liga índigo", "0:23:00", "Comedy", 5, 12, 1, "Temporada 1 (1997)", "El escuadrón Squirtle"));

    //Cuarta serie
    Series.push_back(Serie(21, "Regular Show", "0:11:00", "Comedy", 5, 1, 1, "Temporada 1 (2010)", "El poder"));
    Series.push_back(Serie(22, "Regular Show", "0:11:00", "Comedy", 5, 3, 1, "Temporada 1 (2010)", "Boletos con cafeína"));
    Series.push_back(Serie(23, "Regular Show", "0:11:00", "Comedy", 5, 2, 1, "Temporada 1 (2010)", "Solo acomoden las sillas"));
    Series.push_back(Serie(24, "Regular Show", "0:11:00", "Comedy", 5, 3, 3, "Temporada 3 (2011)", "Skip hace chuza"));
    Series.push_back(Serie(25, "Regular Show", "0:11:00", "Comedy", 5, 11, 3, "Temporada 3 (2011)", "La galleta de la suerte"));

    //Quinta serie
    Series.push_back(Serie(26, "Squid Game", "1:01:00", "Comedy", 5, 1, 1, "Temporada 1 (2021)", "Luz roja, luz verde"));
    Series.push_back(Serie(27, "Squid Game", "1:04:00", "Comedy", 5, 2, 1, "Temporada 1 (2021)", "Infierno"));
    Series.push_back(Serie(28, "Squid Game", "0:55:00", "Comedy", 5, 3, 1, "Temporada 1 (2021)", "El hombre del paraguas"));
    Series.push_back(Serie(29, "Squid Game", "0:56:00", "Comedy", 5, 4, 1, "Temporada 1 (2021)", "No abandones el equipo"));
    Series.push_back(Serie(30, "Squid Game", "0:53:00", "Comedy", 5, 5, 1, "Temporada 1 (2021)", "Un mundo justo"));


    int x=0;
    int y=0;
    int id=31;
    std::string filtro="";
    std::vector<video> filteredMovies;
    while (x!=-1){
        system("clear");
        std::cout<<"1. Mostrar información de las películas"<<std::endl;
        std::cout<<"2. Mostrar información de las series"<<std::endl;
        std::cout<<"3. Mostrar información de las series y películas"<<std::endl;
        std::cout<<"4. Salir"<<std::endl;
        std::cin>>x;
        system("clear");
        if (x==1){
            while(x!=Peliculas.size()+3){
                system("clear");
                std::cout<<"Peliculas:"<<std::endl;
                std::sort(Peliculas.begin(),Peliculas.end());
                for (int i=0;i<Peliculas.size();i++){
                    std::cout<<i+1<<"."<<Peliculas[i].get_Name()<<"        Grade: "<<Peliculas[i].get_Average()<<std::endl;
                }
                std::cout<<Peliculas.size()+1<<". Agregar Pelicula"<<std::endl;
                std::cout<<Peliculas.size()+2<<". Filtrar por genero"<<std::endl;
                std::cout<<Peliculas.size()+3<<". Regresar"<<std::endl;
                std::cin>>x;
                system("clear");
                if (x==Peliculas.size()+1){
                    std::cout<<"Nombre de la pelicula: "<<std::endl;
                    std::string Name;
                    std::cin>>Name;
                    std::cout<<"Duración de la pelicula: "<<std::endl;
                    std::string Time;
                    std::cin>>Time;
                    std::cout<<"Genero de la pelicula: "<<std::endl;
                    std::string Gender;
                    std::cin>>Gender;
                    std::cout<<"Calificación de la pelicula: "<<std::endl;
                    float grade;
                    std::cin>>grade;
                    system("clear");
                    if (grade>5 || grade<1){
                        while (grade>5 || grade<1){
                            std::cout<<"Coloca una calificación entre 1-5"<<std::endl;
                            std::cin>>grade;
                        }
                    }
                    Peliculas.push_back(video(id,Name,Time,Gender,grade));
                    id=id+1;
                }else if (x==Peliculas.size()+2){
                    std::cout<<"Genero de la pelicula: "<<std::endl;
                    std::cin>>filtro;
                    filteredMovies.clear();
                    std::copy_if(Peliculas.begin(), Peliculas.end(), std::back_inserter(filteredMovies),[filtro](video peli) {return filtrado(peli,filtro);});
                     while(x!=filteredMovies.size()+1){
                        for (int i=0;i<filteredMovies.size();i++) {
                            std::cout<<i+1<<"."<<filteredMovies[i].get_Name()<<"        Grade: "<<filteredMovies[i].get_Average()<<std::endl;
                        }
                        std::cout<<filteredMovies.size()+1<<". Regresar"<<std::endl;
                        std::cin>>x;
                        system("clear");
                        if (x<filteredMovies.size()+1 && x>0)
                        {
                            filteredMovies[x-1].Show_Information();
                            std::cout<<"1. Regresar"<<std::endl;
                            std::cin>>y;
                            system("clear");
                            if (y!=1){
                                while (y!=1)
                                {
                                    filteredMovies[x-1].Show_Information();
                                    std::cout<<"1. Regresar"<<std::endl;
                                    std::cin>>y;
                                    system("clear");
                                }
                                
                            }
                        }
                    }
                }
                else if (x<Peliculas.size()+2 && x>0)
                {
                    Peliculas[x-1].Show_Information();
                    std::cout<<"1. Calificar"<<std::endl;
                    std::cout<<"2. Regresar"<<std::endl;
                    std::cin>>y;
                    system("clear");
                    if (y==1)
                    {
                        Peliculas[x-1].Grade_Video();
                    }
                }
            }
        }
        else if (x==2){
            for (int i=0;i<Series.size();i++){
                Series[i].Show_Information();
            }
        }
        else if (x==3){
            for (int i=0;i<Peliculas.size();i++){
                Peliculas[i].Show_Information();
            }
            for (int i=0;i<Series.size();i++){
                Series[i].Show_Information();
            }
        }
        else if (x==4){
            x=-1;
        }
    } 

    return 0;
}
