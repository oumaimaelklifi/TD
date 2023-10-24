#include<iostream>
using namespace std; 

int n =1;
void affiche(){
    cout <<"appel numéro : "<<n; 
    cout<<endl; 
     n++; }
    
   
 int multiple_deux(int x ){
    if(x%2== 0)
   cout<<"il est pair"<<endl;
    return x ;  }
int multiple_trois(int x ){
    if(x%3==0)
    cout<<"il est multiple de 3"<<endl; 
    
    return x ; }

int main (){
    int x ; 
    for(int i=0;i<2;i++){
    cout<<"Donner un entier  : ";
    cin>>x; 
    x=multiple_deux( x );
    x=multiple_trois( x );
    if(x%6==0)
    cout<<"il est divisibe par 6"<<endl;
    cout<<" -----------------------";
    cout<<endl;
    }
}
