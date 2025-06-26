#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin>>n;

    int **row = new int*[n];
    for(int i = 0; i < n; i++) {
        row[i] = new int[n];
    }

    cout << "Enter the elements of the 2D array:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>  row[i][j];
        }
    }

    cout << "The 2D array is:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << row[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Deleting the 2D array..." << endl;
    for(int i = 0; i < n; i++) {
        delete[] row[i];
        cout<<"1 row deleted"<<endl; // Free each row
    }

    cout<<"Memeory free"<<endl;


    return 0;
}