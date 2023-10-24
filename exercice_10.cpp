#include <iostream>
#include<string>
using namespace std; 
class Personne{
 protected : 
    string date_naissance;
    string prenom; 
    string nom;
 public : 
Personne(string date_of_birth,string fist_name,string last_name):date_naissance(date_of_birth),prenom(fist_name),nom(last_name){}

 virtual void affiche(){
    cout<<"date de date_naissance : "<<date_naissance<<endl;
    cout<<"nom est "<<nom <<endl;
    cout<<" le prenom est : "<<prenom<<endl;}
};
class Employe : public Personne {
    private : 
    double salaire ; 
    public:
Employe(string D , string P , string N , double S ):Personne(D,P ,N),salaire(S){}
void affiche () override{
    Personne::affiche(); 
    cout<<" le salaire est : "<<salaire<<endl;}
};
class Chef : public Employe {
    private : 
    string service ;
public : 
Chef(string date,string pre,string no,double sala,string serv):Employe(date,pre,no,sala),service(serv){}
void affiche() override {
    Employe::affiche(); 
    cout<<"le service est "<<service<<endl;}};
class Directeur:public Chef{
    public: 
    string societe ; 
    public : 
Directeur(string d,string p,string n,double s,string se ,string so):Chef(d,p,n,s,se),societe(so){}
void affiche() override {
    Chef::affiche();
    cout<<"la societe est"<<societe<<endl;
}
};

int main()
    
{
   

    return 0;
}