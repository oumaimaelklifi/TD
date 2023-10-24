#include<iostream>
using namespace std;
class Complexe
{
private:
  double reel;
  double imag;
    Complexe (double r, double i):reel (r), imag (i)
  {
  }

  Complexe operator+ (const Complexe autre)
  {
    double R;
    double I;
    R = reel + autre.reel;
    I = imag + autre.imag;
    return Complexe (R, I);
  }

  Complexe operator- (const Complexe autre)
  {
    double R = (reel * autre.reel) - (imag * autre.imag);
    double I = (reel * autre.imag) + (imag * autre.reel);
    return Complexe (R, I);
  }

  bool operator== (const Complexe autre)
  {
    if (reel == autre.reel && imag == autre.imag)
      return true;
    else
      return false;
  }

  void afficher () const
  {
    cout << reel << "+" << imag << endl;
  }
};
int
main ()
{
  char opera ; double imaginaire1, reel1;
 double reel, imaginaire;
  

  cout <<
    "Entrez la partie reelle et imaginaire du premier nombre complexe  : " <<
    endl;
  cin >> reel1 >> imaginaire1;

  cout <<
    "Entrez la partie relle et imaginaire du deuxieme nombre complexe  : "
    << endl;
  cin >> reel >> imaginaire;
   Complexe objet1(reel1 ,imaginaire1);
    Complexe objet2(reel,imaginaire);
Complexe resultat;
  cout << "qulle operations tu veux effectuer ?" << endl;
  cout<<"les opperation que vous devez entrer "<<endl;
  cout << " a : addition "<<endl;
  cout << " s: soustraction "<<endl;
  cout << " m : multipication "<<endl;
  cout<<" e : egalite"<<endl ;
  cout<<" d : adivision  ";
  cin >> opera;
  switch (opera){
    case a: resultat=objet1+objet2; break;

    case s:
    case m:
    case e:
    case d; }
    return 0;
}