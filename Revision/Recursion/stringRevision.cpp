#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "apnacollege";
    int n = str.size();

    char ch = str[n-1];

    cout<<n<<endl;
    cout<<ch<<endl;
    cout<<str[0]<<endl;
    cout<<str[11]<<endl; 

    return 0;

}

