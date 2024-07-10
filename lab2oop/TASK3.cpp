#include <iostream>
using namespace std;

class  dry{
  public:
  
  void address(){
      int a=1;
      char b='a';
       string name="qasim";
       cout<<"*******ADDRESSES******* \n";
      cout<<&a<<endl << (void *)&b <<endl  << (void*)&name <<endl ;
  }
  void value(){
      int a=1;
      char b='a';
      string name="qasim";
        cout<<"*******VALUEs******* \n ";
      cout<<a<<endl <<b <<endl << name << endl  ;
  }
    
};
int main(){
    dry Class; 
    
    Class.address();
    Class.value();
    
    return 0;
}
