#include<iostream>
using namespace std;

int main(){
    int students[3][3] = {{100,100,100},
                           {64,55,66},
                           {98, 66,44}};

   cout<<students[1][1]<<endl;
   cout<<students[1][0]<<endl;
   cout<<students[1][2]<<endl;

   cout<<students[0][1]<<endl;
   cout<<students[2][1]<<endl;
   cout<<students[0][2]<<endl;

}