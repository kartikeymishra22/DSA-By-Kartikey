#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>>* l;
    bool isUndir;

    public:
    Graph(int V, bool isUndir=true){
        this->V = V;
        l = new list<pair<int,int>>[V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v, int wt){
        l[u].push_back(make_pair(v,wt));
        if(isUndir)
            l[v].push_back(make_pair(u,wt));
    }

    void printAdjList(){
        for(int u=0; u<V; u++){
            cout<<u<<"-->";
            list<pair<int,int>> neighbours = l[u];
            for(auto v: neighbours){
                cout<<"("<<v.first<<","<<v.second<<") ";
            }
            cout<<endl;
        }
    }
};

int main(){

    Graph graph(4,false);

    graph.addEdge(0,1,100);
    graph.addEdge(1,2,100);
    graph.addEdge(2,0,100);
    graph.addEdge(1,3,600);
    graph.addEdge(2,3,200);

    graph.printAdjList();

}