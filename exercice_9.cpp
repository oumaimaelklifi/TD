#include <iostream>
#include<string>
using namespace std;
class Animal{
  protected: 
    int age; 
    std::string nom; 
  public : 
  void set_value(int age ,std::string name){
      this->age=age;
      nom=name; }
};
class Zebra : public Animal{
    public : 
    void affiche(){
        cout<<"Je suis "<<nom<<endl;
        cout<<"j ai "<<age<<"ans ,je viens d Afrique ."<<endl; 
     
    }
};
class Dolphin : public Animal{
    public:
    void affiche(){
        cout<<"Je suis " <<nom << " ,j ai "<<age <<" ans ,je suis Marocain(e) ."<<endl;
        }
};
int main()
{
    Zebra objet1 ; 
    Dolphin objet2;
    objet1.set_value(32, "Ali");
    objet2.set_value(18, "Amal");
objet1.affiche();
objet2.affiche();
    return 0;
}