#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
    public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node(){
        endOfWord = false;
    }
};

class Trie{
    Node* root;

    public:
    Trie(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;
        for(int i = 0; i<key.size(); i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }

    bool search(string key){
        Node* temp = root;
        for(int i = 0; i<key.size(); i++){
            if(temp->children.count(key[i])){
                temp = temp->children[key[i]];
            }
            else{
                return false;
            }
        }
        return true;
    }
};


int main(){
    vector<string> words = {"apple","apply", "mango", "man", "woman"};

    Trie trie;
    for(string word: words){
        trie.insert(word);
    }

    cout<<trie.search("appee")<<endl;
}