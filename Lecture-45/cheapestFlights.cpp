#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

class Graph{
    public:
    int V;
    list<pair<int,int>>* l;
    bool isUndir;

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
            for(pair<int,int> v: neighbours){
                cout<<"("<<v.first<<","<<v.second<<") ";
            }
            cout<<endl;
        }
    }
};


class Info{
public:
    int u;
    int cost;
    int stops;

    Info(int u, int cost, int stops){
        this->u = u;
        this->cost = cost;
        this->stops = stops;
    }
};

int cheapestFlights(Graph &graph, int src, int dst, int stops){
    queue<Info> q;
    vector<int> dist(graph.V, INT_MAX);

    dist[src] = 0;
    q.push(Info(src, 0, -1));

    while(q.size()>0){
        Info curr = q.front();
        q.pop();

        list<pair<int,int>> neighbours = graph.l[curr.u];
        for(auto neighbour : neighbours){
            int v = neighbour.first;
            int wt = neighbour.second;

            if(dist[v] > curr.cost + wt && curr.stops + 1 <= stops){
                dist[v] = curr.cost + wt;
                q.push(Info(v, dist[v], curr.stops + 1));
            }
        }
    }
    if(dist[dst] == INT_MAX){
        return -1;
    }
    return dist[dst];
}
int main(){

    Graph graph(4,false);

    graph.addEdge(0,1,100);
    graph.addEdge(1,2,100);
    graph.addEdge(2,0,100);
    graph.addEdge(1,3,600);
    graph.addEdge(2,3,200);

    cout<<cheapestFlights(graph,0,3,2)<<endl; //

}