/*Écrire une fonction nommée incrementer() permettant d’incrémenter la valeur d’une variable passée
en paramètre et une fonction nommée permuter() permettant d’échanger les contenus de 2 variables
de type int fournies en argument :
1. en transmettant l’adresse des variables concernées (seule méthode utilisable en C) ;
2. en utilisant la transmission par référence.
Dans les deux cas, écrire un programme (main) qui teste les deux fonctions.*/
#include <iostream>
void incrementer(int &valeur) {
 valeur++;
    
}
void permuterRef(int &a , int &b){
    int temp=a; 
    a=b; 
    b=temp;}
void permuterPoi(int *a , int *b){
    int temp=*a; 
    *a=*b; 
    *b=temp;}

using namespace std;
int main()
{  int b=9;
   int c=8;
   int a=5; 
   int *p=&a;
   int d=3;
   int *q=&d;
   
   permuterRef(b ,c );
   cout<<" la valeur de b est "<< b <<" et la valuer de c est "<<c<<endl;
      
   permuterPoi(p ,q);
   cout<<" la valeur de a est "<< *p <<" et la valuer de c est "<<*q<<endl;
   

    int valeur = 5;
    incrementer(valeur);
    cout << "Après l'incrémentation : " << valeur << std::endl;

    return 0;
}