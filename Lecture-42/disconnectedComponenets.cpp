#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int>* l;

    public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);  //undirected graph
    }

    void print(){
        for(int u =0; u<V; u++){
            list<int> neighbours = l[u];
            cout<<u<<"->";
            for( int v : neighbours){
                cout<<v<<",";
            }
            cout<<endl;
        }
    }

    void dfsHelper(int u, vector<bool> &visited){
        visited[u] = true;
        cout<<u<<" ";

        list<int> neighbours = l[u];
        for(int v : neighbours){
            if(!visited[v]){
                dfsHelper(v, visited);
            }
        }
    }

    void dfs(){
        vector<bool> visited(V, false);
        for(int i = 0; i<V; i++){
            if(!visited[i]){
                dfsHelper(i, visited);
                cout<<endl;
            }
        }
    }
};

int main(){
    Graph graph(10);
    graph.addEdge(1,6);
    graph.addEdge(6,4);
    graph.addEdge(4,3);
    graph.addEdge(4,9);
    graph.addEdge(3,7);
    graph.addEdge(3,8);
    graph.addEdge(2,0);
    graph.addEdge(2,5);

    graph.print();

    graph.dfs();

    return 0;
}