#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

class Edge{
    public:
    int  V;
    int wt;

    Edge(int V, int wt){
        this->V = V;
        this->wt = wt;
    }
    
};

void dijkstra(int src, vector<vector<Edge>> graph, int V){

    priority_queue<pair<int, int> , vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(V, INT_MAX);
    pq.push(make_pair(0,src));
    dist[src] = 0;

    while(pq.size()> 0){
        int u = pq.top().second;
        pq.pop();

        vector<Edge> neighbours = graph[u];
        for(Edge e: neighbours){
            if(dist[e.V] > dist[u] + e.wt){
                dist[e.V] = dist[u] + e.wt;
                pq.push(make_pair(dist[e.V], e.V));
            }
        }
    }

    for(int d : dist){
        cout<<d<<" ";
    }
    cout<<endl;
}

int main(){

    int V = 6;
    vector<vector<Edge>> graph(V);

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));

    graph[2].push_back(Edge(4, 3));

    graph[3].push_back(Edge(5, 1));

    graph[4].push_back(Edge(3, 2));
    graph[4].push_back(Edge(2, 5));

    dijkstra(0, graph, V);

    return 0;

}