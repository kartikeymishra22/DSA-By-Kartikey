#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int>* l;

    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
    }

    void print(){
        for(int u = 0; u <V; u++){
            list<int> neighbours = l[u];
            cout<<u<<"->";
            for(int v: neighbours){
                cout<<v<<",";
            }
            cout<<endl;
        }
    }

    bool dfsHelper(int u, vector<bool> &vis, vector<bool> &stack){
        vis[u] = true;
        stack[u] = true;

        list<int> neighbours = l[u];
        for(int v : neighbours){
            if(!vis[v]){
                if(dfsHelper(v, vis, stack)){
                    return true;
                }
            }
            else{
                if(stack[v]){
                    return true;
                }
            }
        }
        stack[u] = false;
        return false;
    }
    bool dfs(){
        vector<bool> vis(V, false);
        vector<bool> stack(V, false);
        return dfsHelper(0, vis, stack);
    }
};

int main(){
    Graph graph(4);
    graph.addEdge(1,0);
    graph.addEdge(0,2);
    graph.addEdge(2,3);
    graph.addEdge(3,0);

    graph.print();
    cout<<graph.dfs()<<endl;
    return 0;
}