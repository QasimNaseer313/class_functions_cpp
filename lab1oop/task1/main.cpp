/*Write a C++ program to find the sum of all elements and the largest element in an array.
This program should:
• Declare an array of integers (you can choose the size and values of the array).
• Calculate and print the sum of all elements in the array.
• Find and print the largest element in the array
*/

#include <iostream>
using namespace std;
void array();

int main(){
    array();
    return 0;

}
 void array(){
cout<<"enter size of array \n";
int size;
cin>>size;
int a[size];
cout<<"enter "<<size <<" values of array elements :";
for(int i=0; i<size; i++){
    cin>>a[i];
}
int sum=0;
cout<<"sum: ";
for(int i=0; i<size; i++){
    sum+=a[i];
}
cout<<endl;
cout<<sum;
cout<<endl;
cout<<"largest element in the array is \n";
int max=a[0];
for(int i=0; i<size; i++){
    if(max<a[i]){
        max=a[i];
    }
}

cout<<max;
}
