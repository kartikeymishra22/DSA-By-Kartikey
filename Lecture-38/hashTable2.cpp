#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
    public:
    string key;
    int value;
    Node* next;

    Node(string key, int value){
        this->key = key;
        this->value = value;
        next = NULL;
    }

};

class HashTable{
    int totalSize;
    int currSize;
    Node** table;

public: 
   HashTable(int size=5){
      totalSize = size;
      currSize = 0;
      table = new Node*[totalSize];

      for(int i = 0; i<totalSize; i++){
        table[i] = NULL;
      }
   }
   void insert(string key , int value){

   }
   void remove(string key){

   }
   int search(string key){

   }
};

int main(){

    HashTable ht();

    return 0;
}