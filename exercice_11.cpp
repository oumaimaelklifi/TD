#include <iostream>
#include<string>
#include<cmath>
using namespace std;
/*

− le résultat est renvoyé par valeur ;
− le résultat est renvoyé par adresse, l’argument étant également transmis par adresse.
− le résultat est renvoyé par référence, l’argument étant également transmis par
référence.*/
class Vecteur3d{
   private: 
     float x; 
     float y; 
     float z; 
   public : 
     Vecteur3d () :x(0),y(0),z(0){ }
     void afficher(){
        cout<<"Les trois composantes du vecteur : (" <<x<<","<<y<<","<<z<<")"<<endl;}
    Vecteur3d somme( Vecteur3d &autre){
       Vecteur3d temp; 
       temp.x=x+autre.x;
       temp.y=y+autre.y;
       temp.z=z+autre.z;
       return temp;} 
       
   Vecteur3d produitScalaire (Vecteur3d &autre){
       Vecteur3d temp; 
       temp.x=x*autre.x;
       temp.y=y*autre.y;
       temp.z=z*autre.z;
       return temp;}
             
   bool MemeComp (Vecteur3d &autre){
      if( x==autre.x && y==autre.y && z==autre.z)
      return true ; 
       else return false ;  }
   float NormeVecteur (Vecteur3d &p){
       float somme= (p.x * p.x)+ (p.y * p.y)+(p.z* p.z);
       return sqrt(somme); }
   Vecteur3d NorMax (Vecteur3d &p , Vecteur3d &q){
       float normp= NormeVecteur(p);
        float normq= NormeVecteur(q);
        if (normp>normq){ 
           cout<<"le vecteur p a le plus grand norme "<<endl;
       return p ; }
       else 
       {  cout<<"le vecteur q a plus grand norme "<<endl;
           return  q;}}
   
};
int main()
{
    cout<<"Hello World";

    return 0;
}