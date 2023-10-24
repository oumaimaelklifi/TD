#include<iostream>
#include<string>
using namespace std;
class Date{
    private :
    int jour ;
    int mois ;
    int annee; 
    int heure ;
    int minute ;
    public:
Date (int j,int m,int a,int h , int min): jour(j),mois(m),annee(a) ,heure(h) ,minute(min){}
 void trans(int mois ){
     switch(mois){
         case 1 :cout<<"janvier"; break;
         case 2 :cout<<"fevrier"; break;
         case 3 :cout<<"Mars"; break;
         case 4 :cout<<"Avril"; break;
         case 5 :cout<<"Mai"; break;
         case 6 :cout<<"juin "; break;
         case 7 :cout<<"juillet"; break;
         case 8 :cout<<"aout"; break;
         case 9 :cout<<"septempre "; break;
         case 10:cout<<"octobre"; break;
         case 11:cout<<"Novembre"; break;
         case 12:cout<<"Decembre"; break;
         default: cout<<"tu dois entrer un nombre entre 1 et 12"<<endl;
     }
 }
 
  void affiche(){
      cout<<"ce nombre "<<jour<<mois<<annee<<heure<<minute<<"represente la date du : "<<endl;
  }
        
};

int main()
{ Date objet(1,2,3,4,5);

    return 0;
}