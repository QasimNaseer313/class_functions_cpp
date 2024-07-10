/*
 Task 4:
Raising a number to a power p is the same as multiplying n by itself p times.
Write a function called power that takes two arguments, a double value for n and
 an int value for p, and return the result as double value. Use default argument of 2 for p,
 so that if this argument is omitted the number will be squared. Write the main function that gets
 value from the user to test power function.
 */





#include <iostream>
using namespace std;

double power(double n, int p=2);


int main()
{
    double number;
    cout<<"Enter number"<<endl;
    cin>>number;
    cout<<"Do you want to enter power Or Go Default  (y/n)"<<endl;
    char ch;
    cin>>ch;
    int Power;
    if(ch=='y'){
    cout<<"Enter Power"<<endl;
    cin>>Power;

    }else{
        Power=2;
    }
    double result = power(number,Power);
    cout << "Power of "<<number<< "^"<<Power<<": " << result << endl;

    return 0;
}

double power(double n, int p){
    double result=1.00;
    for(int i=0; i<p ;i++){
         result*=n;
        }
        return result;
}
