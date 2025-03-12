#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    bool isUndir;

    public:
    Graph(int V, bool isUndir=true){
        this->V = V;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        if(isUndir)
            l[v].push_back(u);
    }

    void calcIndeg(vector<int> &indeg){
        for(int i = 0; i<V; i++){
            list<int> neighbours = l[i];
            for(int v : neighbours){
                indeg[v]++;
            }
        }
    }

    void topSort(){
        vector<int> indeg(V, 0);
        calcIndeg(indeg);

        queue<int> q;
        for(int i = 0; i<V; i++){
            if(indeg[i] == 0)
                q.push(i);
        }

        while(q.size()> 0){
            int curr = q.front();
            cout<<curr<<" ";
            q.pop();

            list<int> neighbours = l[curr];
            for(int v : neighbours){
                indeg[v]--;
                if(indeg[v] == 0)
                    q.push(v);
            }
        }
        cout<<endl;
    }
};

int main(){

    Graph g(6,false);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(5, 0);
    g.addEdge(5, 2);

    g.topSort();

    return 0;
}