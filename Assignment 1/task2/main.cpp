
   /*A class named “Employee” holds information like employee code,
    name,gender, year of joining. Write a program to create three objects of
     employee and enter some data into it through setters. Make getters and setters
     for all employee information. Then ask the user to enter current year. Display the names
        of those employees whose tenure is 2 or more than 2 years according to the given current
        year only using getters.
        ::  scope resolution
        */


#include <iostream>
#include <ctype.h>
using namespace std;

class Employee{

    string employe_code;
    string employ_name;
    string employ_gender;
    int year_of_joining;

 public:

     void set_employe_code();
     void set_employ_name();
     void set_employ_gender();
     void set_year_of_joining();
     string get_employe_code();
     string get_employ_name();
     string get_employ_gender();
     int get_year_of_joining();
     string get_tenure();
};


int main() {
    Employee q[3];
    for(int i=0 ; i<3 ; i++){
    q[i].set_employe_code();
    q[i].set_employ_name();
    q[i].set_employ_gender();
    q[i].set_year_of_joining();

    cout << "Employee Code: " << q[i].get_employe_code() << endl;
    cout << "Employee Name: " << q[i].get_employ_name() << endl;
    cout << "Employee Gender: " << q[i].get_employ_gender() << endl;
    cout << "Year of Joining: " << q[i].get_year_of_joining() << endl;
    cout <<q[i].get_tenure()<<endl;
    }


    return 0;
}

 void Employee::set_employe_code(){

 cout<<"enter code"<<endl;
 string code;
 cin>>code;

    if(code.at(0)!='-'){
     if(code.length()<20){
       employe_code=code;
   }
 }
 else{

    cerr <<"error!id should not start from '-' "<<endl;
    set_employe_code();
 }
}//end of employ code

void Employee::set_employ_name(){

    string name;
    cout<<"enter name"<<endl;
    cin>>name;

        if(name.at(0)!='-'){
          if(name.length()<20){
             employ_name=name;
             }
            }
        else{
            cerr<<"error: uncorrect name"<<endl;
            set_employ_name();
        }
}
// end of getemployname

void Employee::set_employ_gender(){

string gender;


cout<<"enter gender"<<endl;
cin>>gender;

 if (gender == "M"  || gender == "F" || gender == "X" || gender == "m"  || gender == "f" || gender == "x") {
 employ_gender=gender;
}
else{cerr<<"error: M for male, F for female ,X for intersex"<<endl;
set_employ_gender();
}

}


void Employee::set_year_of_joining(){

int year;
cout<<"Enter year of joining: "<<endl;
cin>>year;

if(year>2000 && year<=2023){
year_of_joining=year;
}else{
cerr << "Error: Year should be between 2000 and 2023." << endl;
set_year_of_joining();
}
}//end of get_year_of_joining

//getters

string Employee::get_employe_code(){
return employe_code;
}

string Employee::get_employ_name(){
return employ_name;
}

string Employee::get_employ_gender(){
return employ_gender;
}

int Employee::get_year_of_joining(){
return year_of_joining;
}

string Employee::get_tenure(){
cout<<"Enter current year"<<endl;
int current_year;
cin>>current_year;
if(current_year-year_of_joining==2 || current_year-year_of_joining>2){
return "names of employees whose tenure is 2 or more than 2 years:   " + employ_name;
}else{
return "Tenure is less then 2";
}
}
