
#include <iostream>

using namespace std;


void addition();
void subtraction();
void multiplication();
void division();
void power();
void menu();

int main(){
menu();
return 0;
}


void addition(){

    int sum=0 ;
    int value ;
    cout<<"how many numbers u want to enter "<<endl;
    int n;
    cin>>n;
    cout<<"enter "<<n<<" numbers" <<endl;

    for(int i=0; i<n; i++){
    cin>>value;
    sum+=value;
    }
    cout<<"sum : "<<sum;
}

    void subtraction(){

    int subtract=0 ;
    int value ;
    cout<<"how many numbers u want to enter "<<endl;
    int n;
    cin>>n;
    cout<<"enter "<<n<<" numbers" <<endl;

    for(int i=0; i<n; i++){
    cin>>value;
    subtract-=value;
}
cout<<"Subtract : "<<subtract;
    }

void multiplication(){

    int multiply=0 ;
    int value ;
    cout<<"how many numbers u want to enter "<<endl;
    int n;
    cin>>n;
    cout<<"enter "<<n<<" numbers" <<endl;

    for(int i=0; i<n; i++){
    cin>>value;
    multiply*=value;
    }
    cout<<"Multiply :  "<<multiply;
}

    void division(){
    int division=0 ;
    int value ;
    cout<<"how many numbers u want to enter "<<endl;
    int n;
    cin>>n;
    cout<<"enter "<<n<<" numbers" <<endl;

    for(int i=0; i<n; i++){
    cin>>value;
    division/=value;
    }
    cout<<"division : " <<division;
    }

void power(){

    cout<<"enter the number you want to find power of it"<<endl;
    int number;
    cin>>number;
    cout<<"enter  power "<<endl;
    int power ;
    cin>>power;
    int result = 1;
    for(int i = 0; i < power; ++i)
    {
        result *= number;
    }
    cout <<"Power :"<< result << endl;
}





void menu(){

cout<<"welcome to the calculator program"<<endl;
cout<<"Press 1 for Addition "<<endl;
cout<<"Press 2 for Subtraction "<<endl;
cout<<"Press 3 for Multiplication" <<endl;
cout<<"Press 4 for Division" <<endl;
cout<<"Press 5 for Power" <<endl;
cout<<"Press 6 for Exit"<<endl;


int checkNum;
cin>>checkNum;

        if(checkNum==1){
        addition();
        }
        if(checkNum==2){
        subtraction();
        }
        if(checkNum==3){
        multiplication();
        }
        if(checkNum==4){
        division();
        }
        if(checkNum==5){
        power();
        }
        if(checkNum==6){
         cout<<"program ends/n";
        }
        else{"cout<<invalid input ";}
}
