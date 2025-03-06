#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node {
public:
    string key;
    int value;
    Node* next;

    Node(string key, int value) {
        this->key = key;
        this->value = value;
        next = nullptr;
    }

    ~Node() {
        if (next != nullptr) {
            delete next;
        }
    }
};

class HashTable {
    int totalSize;
    int currSize;
    Node** table;

    int hashFunction(string key) {
        int idx = 0;

        for (int i = 0; i < key.size(); i++) {
            idx = (idx + (key[i] * key[i])) % totalSize;
        }

        return idx;
    }

    void rehash() {
        Node** oldTable = table;
        int oldSize = totalSize;

        totalSize *= 2;
        currSize = 0;
        table = new Node*[totalSize];

        for (int i = 0; i < totalSize; i++) {
            table[i] = nullptr;
        }

        // Copy old values
        for (int i = 0; i < oldSize; i++) {
            Node* temp = oldTable[i];
            while (temp != nullptr) {
                insert(temp->key, temp->value);
                Node* prev = temp;
                temp = temp->next;
                delete prev;
            }
        }

        delete[] oldTable;
    }

public:
    HashTable(int size = 5) {
        totalSize = size;
        currSize = 0;
        table = new Node*[totalSize];

        for (int i = 0; i < totalSize; i++) {
            table[i] = nullptr;
        }
    }

    void insert(string key, int value) {
        int idx = hashFunction(key);

        Node* newNode = new Node(key, value);
        newNode->next = table[idx];
        table[idx] = newNode;
        currSize++;

        double lambda = currSize / (double)totalSize;

        if (lambda > 1.0) {
            rehash();
        }
    }

    bool exists(string key) {
        int idx = hashFunction(key);

        Node* temp = table[idx];

        while (temp != nullptr) {
            if (temp->key == key) {
                return true;
            }
            temp = temp->next;
        }

        return false;
    }

    int search(string key) {
        int idx = hashFunction(key);
        Node* temp = table[idx];

        while (temp != nullptr) {
            if (temp->key == key) {
                return temp->value;
            }
            temp = temp->next;
        }
        return -1;
    }

    void print() {
        for (int i = 0; i < totalSize; i++) {
            cout << "idx : " << i << " ";
            Node* temp = table[i];
            while (temp != nullptr) {
                cout << "(" << temp->key << "," << temp->value << ") ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    ~HashTable() {
        for (int i = 0; i < totalSize; i++) {
            delete table[i];
        }
        delete[] table;
    }
};

int main() {
    HashTable ht;

    ht.insert("India", 150);
    ht.insert("USA", 200);
    ht.insert("China", 250);
    ht.insert("Pakistan", 100);
    ht.insert("Bangladesh", 180);
    // ht.insert("Nepal", 50);
    // ht.insert("Sri Lanka", 70);
    // ht.insert("Bhutan", 30);

    if (ht.exists("India")) {
        cout << "India population: " << ht.search("India") << endl;
    }

    ht.print();

    return 0;
}
