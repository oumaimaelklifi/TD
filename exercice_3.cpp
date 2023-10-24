#include<iostream>
using namespace std;
#include<iostream>
using namespace std; 


    



int main (){
  
     int i=0;
     int max , min ;
     int maxP , minP;
          int tab[10];
    for(i=0; i<10; i++)
    cin>>tab[i]; 
    cout<<" les valeurs du tableau sont :  " ;
     cout<<endl;
    
     for(i=0; i<10; i++){
     cout<<"tab["<<i<<"]=" <<tab[i]; 
     cout<<endl;}
     max=tab[0]; 
     for(i=0; i<10; i++){
         if(max<=tab[i])
         max=tab[i];  
     }
     cout<<"le max est  "  <<max ;
     cout<<endl;
      min=tab[0]; 
     for(i=0; i<10; i++){
         if(min>=tab[i])
         min=tab[i];  
     }
     cout<<"le min est  "  <<min ;
     // « formalisme pointeur »,
     int T[10];
     int *p; 
       for(p=T ;p<T+10; p++){
           cin>>*p; }
       for(p=T ;p<T+10; p++){
          cout<<*p <<endl;}
          maxP=T[0];
      for(p=T ;p<T+10; p++){
           if(maxP<=*p)
           maxP=*p;}
     cout<<"le max est : "<<maxP<<endl;

          minP=T[0];
      for(p=T ;p<T+10; p++){
           if(minP>=*p)
           minP=*p;}
     cout<<"le min est : "<<minP<<endl;
     
         return 0;
     
     
  
    
}