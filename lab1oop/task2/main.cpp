#include <iostream>

using namespace std;
void prime();

int main()
{
    prime();
    return 0;
}

void prime(){
    char y='y';
    do{

    char a;
cout<<"enter a number \n";

int number;
cin>>number;

int check_divisors=0;
for (int i = 1; i <= number ; i++){
    if (number % i == 0)
        {
      check_divisors++;
        }
}
if(check_divisors==2){
    cout<<"***number is prime***\n";

}
else
        {cout<<"***number is not prime***\n";}

cout<<"if u want to check another number\n";
cout<<"enter 'y' other wise enter 'n' \n";
cin>>a;

        if(a=='y')
                {prime();}
            else
                {y='x';}

 }while(y=='y');

}
