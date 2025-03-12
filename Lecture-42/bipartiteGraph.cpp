#include<iostream>
#include<vector>
#include<list>
#include<queue>
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

    bool bfs(){
        queue<int> q;
        vector<bool> visited(V, false);
        vector<int> color(V, -1);
        q.push(0);
        visited[0] = true;
        color[0] = 0;

        while(q.size() > 0){
            int u = q.front();
            q.pop();

            list<int> neighbours = l[u];
            for(int v : neighbours){
                if(!visited[v]){
                    visited[v] = true;
                    color[v] = !color[u];
                    q.push(v);
                }
                else{
                    if(color[v] == color[u]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

int main(){
    Graph graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);

    // graph.print();

    cout<<graph.bfs()<<endl;

}
