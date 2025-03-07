#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<typename T, typename V>
class Node{
    public:
    T key;
    V value;
    Node<T,V>* next;

    Node(T key, V value){
        this->key = key;
        this->value = value;
        next = NULL;
    }
};
template<typename T, typename V>
class HashTable{
    int totalsize;
    int currsize;
    Node<T,V>** table;

    public:
    HashTable(int size=5){
        totalsize = size;
        currsize = 0;
        table = new Node<T,V>*[totalsize];

        for(int i = 0; i<totalsize; i++){
            table[i] = NULL;
        }
    }
};

int main(){
    HashTable<string, int> ht;

    return 0;
}