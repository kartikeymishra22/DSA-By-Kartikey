#include<iostream>
using namespace std;

int main(){
//     int ch1 = 'a';
    // int ch2 = 'b';
    // int ch3 = 'c';
    // int ch4 = 'd';
    // int ch5 = '\n';
    // int ch6 = '\t';

    // cout << int(ch1) << " " 
    //      << int(ch2) << " " 
    //      << int(ch3) << " " 
    //      << int(ch4) << " "
    //      << int(ch5) << " "
    //      << int(ch6) << endl;

    int arr[5] = {1,2,3,4,5};
    cout<< "Size of arr: " << sizeof(arr) << endl;
    cout<<arr<<endl;
    cout<<arr+1<<endl; // This will print the address of the second element in the array.
    cout<<*arr<<endl;
    cout<<*arr +1<<endl; // This will print 2, as *arr is 1 and we add 1 to it.
    cout<<arr[1]<<endl; // This will cause an error, as arr[1] is an int, not a pointer.
    cout<<&arr<<endl;
    cout<<&arr[3]<<endl;

     return 0;
}