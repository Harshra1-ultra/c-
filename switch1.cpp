#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"input a character :";
    cin>>button;

   switch(button)
   {
       case 'a':
       cout<<"hello"<<endl;
       break;
       case 'b':
       cout<<"halo"<<endl;
       break;
       case 'c':
       cout<<"ola"<<endl;
       break;
       case 'd':
       cout<<"ciao"<<endl;
       break;

       default :
       cout<<"i have to learn some things"<<endl;
   }
   return 0; 
    
}