//Task 5:
/*Define a class StudentReport with the following specification:
Private members :
adno                         4 digit admission number
name                        20 characters
marks                       an array of 5 floating point values
average                    average marks obtained
GETAVG()                 a function to compute the average obtained in five subject
Public members:
READINFO()              function to accept values for adno, name, marks. Invoke the function
                                   GETAVG()

DISPLAYINFO()          function to display all data members of StudentReport on the screen.
You should give function definitions outside the class using scope resolution operator.
, char set_name , float set_marks[5], float set_average*/

#include <iostream>
#include <string>
using namespace std;
int upto=5;

class StudentReport{
    int adno;
    string name;
    float marks[5];
    float average;
    //function to get average
    float GETAVG(){
    float sum=0.0;
    for(int i=0; i<upto ; i++){
    sum+=marks[i];
    }
    average=sum/upto;
    }
    public:

   void READINFO();
   void DISPLAYINFO();
};
int main(){
    StudentReport q;
    q.READINFO();
    q.DISPLAYINFO();
return 0;
}

 void  StudentReport::READINFO( ){
       // set admission number

        int set_adno;
        bool check_adno=true;
        do{
        cout<<"Enter admission number\t( 4 digit )"<<endl;
        cin>>set_adno;
        if(set_adno>1000 && set_adno<9999)
        {adno=set_adno;
        check_adno=false;}else{
        check_adno=true;
        }

        }while(check_adno);

     // set name
        cin.ignore();
        string set_name;
        bool check_name;
        do{
        cout<<"Enter Name \t(>20 characters)"<<endl;
        getline(cin, set_name);
        if(set_name.length()<20 ){
        name=set_name;
        check_name=false;
        }else{
        check_name=true;}
        }while(check_name);


  //Getting marks  from user
        float set_marks[5];
        //int upto=5;
        cout<<"Enter Marks\t (Floating Values)"<<endl;
        for(int i=0; i<upto ; i++){
        cin>>set_marks[i];
        marks[i]=set_marks[i];
        }
//invoking get average function
  GETAVG();
}

 void StudentReport::DISPLAYINFO(){
       cout<<"Admission  number of student is  : "<<adno<<endl;
       cout<<"Name of the Student is : "<<name<<endl;
       cout<<"Marks of the 5 objects is given as :";
       for(int i=0; i<upto; ++i){
        cout<<marks[i]<<" , ";
       }
       cout<<endl<<"Average of Student: "<<average<<endl;
   }


