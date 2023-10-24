#include <iostream>
using namespace std;
class Test{
    private :
    static int temp; 
    public :
    

void call(){

    temp++;
    cout<<temp<<endl;
}
};
int Test ::  temp=0;
int main()
{
   Test objet1 ;
   objet1.call();
   objet1.call();
   objet1.call();