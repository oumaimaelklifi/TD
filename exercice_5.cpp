#include <iostream>
#include<iostream>
using namespace std;

int main()
{
    /*Ecrire un programme C++ qui :
1. déclare un entier a;
2. déclare une référence vers cet entier ref_a;
3. déclare un pointeur vers cet entier p_a;
4. affiche les variables, leurs adresses, la valeur pointée.*/

   int a=9; 
   int &ref=a; 
   int *p=&a;
   cout<<" la valeur de a est : "<<a <<endl;
   cout<<" la valeur de a est : "<<*p <<endl;
   cout<<" l adrtesse  de a est : "<<&a <<endl;
   cout<<" l adrtesse  de ref est : "<<&ref <<endl;
   cout<<" l adrtesse  de a est : "<<p<<endl; 
}