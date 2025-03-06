#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Node{
    public:
    T key;
    T value;
    Node* next;

    Node(T key, T value){
        this->key = key;
        this->value = value;
        next = NULL:
    }
};
template<typename T>
class HashTable{
    int totalsize;
    int currsize;
    Node<T>** table;

    public:
    HashTable(int size=5){
        totalsize = size;
        currsize = size;
        table = new Node*[totalsize];

        for(int i = 0; i<totalsize; i++){
            table[i] = NULL;
        }
    }
};

int main(){
    HashTable<string> ht();

    return 0;
}