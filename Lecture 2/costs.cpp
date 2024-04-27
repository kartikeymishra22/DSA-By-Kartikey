#include<iostream>
using namespace std;

int main()
{
    float pen , pencil, eraser;
    cin>>pen;
    cin>>pencil;
    cin>>eraser;

    float totalcos = (pen + pencil + eraser);

    cout<<totalcos<<endl;
    cout<<"With GST "<<(totalcos + (0.18 * totalcos))<<endl;
}