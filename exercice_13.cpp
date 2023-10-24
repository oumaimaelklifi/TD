#include <iostream>
using namespace std;

/*fichier poin.h*/
#ifndef Point_ph
#define Point_ph
 using namespace std;
 class Point{
       private:
        float x , y;
       public: 
    Point(float dx , float dy);
   
    void deplace(float a , float b);
       
     void affiche();
       
};

#endif

/* fichier source point.cpp*/

#include"fichier.hpp"
using namespace std; 
  Point :: Point(float dx , float dy):x(dx),y(dy){}
   
    void Point::  deplace(float a , float b){
        x+=a;
        y+=b;}
     Point:: void affiche(){
        cout<<"les coordonnées cartésiennes du point."<<x<<y<<endl; }
};

class Point{
       private:
        float x , y;
       public: 
    Point(float dx , float dy):x(dx),y(dy){}
   
    void deplace(float a , float b){
        x+=a;
        y+=b;}
     void affiche(){
        cout<<"les coordonnées cartésiennes du point."<<x<<y<<endl; }
};

int main()
{
    

    return 0;
}