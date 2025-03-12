#include<iostream>
#include<list>
#include<vector>
#include<stack>
using namespace std;

class Graph{
    int V;
    list<int>* l;
    bool isUndir;

    public:
    Graph(int V, bool isUndir=true){
        this->V = V;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        if(isUndir){
            l[v].push_back(u);
        }
    }

    void print(){
        for(int u = 0; u<V; u++){
            cout<<u<<"->";
            list<int> neighbour = l[u];
            for(int v: neighbour){
                cout<<v<<",";
            }
            cout<<endl;
        }
    }

    void topHelper(int u, vector<bool> &visited, stack<int> &s){
        visited[u] = true;
        list<int> neighbour = l[u];
        for(int v: neighbour){
            if(!visited[v]){
                topHelper(v, visited, s);
            }
        }
        s.push(u);
    }

    void topSort(){
        vector<bool> visited(V, false);
        stack<int> s;

        for(int i = 0; i<V; i++){
            topHelper(i, visited, s);
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
};

int main(){
    Graph g(6, false);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(5, 2);
    g.addEdge(5, 0);

    g.topSort();
    return 0;
    
}