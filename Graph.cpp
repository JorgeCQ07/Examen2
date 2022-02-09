//
// Created by adr20 on 8/2/2022.
//

#include "Graph.h"

Graph::Graph(int V, int E) {
    this->E = E;
    this->V = V;
    adj = new list<pair<int, int>>[V];
}

void Graph::addEdge(int u, int v, int w) {
    edges.push_back({w, {u, v}});
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u,w));
}

int Graph::kruskalMST() {
    int mst_wt = 0;
    sort(edges.begin(), edges.end());
    DisjointSets ds(V);
    vector<pair<int, iPair>>::iterator it;
    for(it = edges.begin(); it != edges.end(); it++){
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);
        string lbl = "ABCDEFGHI";
        if(set_u != set_v){
            cout<<lbl[u]<<" - "<<lbl[v]<<endl;
            mst_wt += it->first;
            ds.merge(set_u, set_v);
        }
    }
    return mst_wt;
}

void Graph::shortestPath(int s) {
    set<pair<int, int>> setds;
    vector<int> dist(V, INF);
    setds.insert(make_pair(0,s));
    dist[s] = 0;

    while(!setds.empty()){
        pair<int, int> tmp = *(setds.begin());
        setds.erase(setds.begin());
        int u = tmp.second;
        list<pair<int, int>>::iterator i;
        for(i = adj[u].begin(); i != adj[u].end(); i++){
            int v = (*i).first;
            int weight = (*i).second;
            if(dist[v] > dist[u] + weight){
                if(dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }
    cout<<"Vertice Distancia desde Source"<<endl;
    for(int i = 0; i < V; ++i){
        cout<<i<<"\t\t" << dist[i] << endl;
    }
}