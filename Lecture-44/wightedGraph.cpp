#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<pair<int, int>>* l;

    public:
    Graph(int V){
        this->V = V;
        l = new list<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int wt){
        l[u].push_back(make_pair(v, wt));
        l[v].push_back(make_pair(u, wt));
    }

    void print(){
        for(int u = 0; u<V; u++){
            cout<<u<<"->";
            list<pair<int, int>> neighbour = l[u];
            for(auto v : neighbour){
                cout<<"("<<v.first<<","<<v.second<<")";
            }
            cout<<endl;
        }
    }

};

int main(){
    
    Graph graph(5);
    graph.addEdge(0, 1, 2);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 3);
    graph.addEdge(1, 3, 7);
    graph.addEdge(2, 4, 1);
    graph.addEdge(3, 4, 2);
    graph.addEdge(3, 2, 5);
    graph.addEdge(4, 3, 6);

    graph.print();

    return 0;
}