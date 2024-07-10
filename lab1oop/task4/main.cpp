/*
Write a C++ program that includes a non-parameterized function called printPattern. The function
should print the following pattern to the console:
1
12
123
1234
12345
*/

#include <iostream>
using namespace std;
void printPattern();

int main()
{
    printPattern();
    return 0;
}
void printPattern(){
cout<<"enter numbers\n";
int  number;
cin>>number;
for(int i; i<number; i++){

    cout<< number <<endl <<number+i;
}
}
