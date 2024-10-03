#include "floydwarshall.h"

using namespace std;

Graph::Graph(int V) {
    this->V = V;
    dist.resize(V, vector<int>(V, numeric_limits<int>::max()));
    for (int i = 0; i < V; i++) {
        dist[i][i] = 0;
    }
}

void Graph::addEdge(int u, int v, int w) {
    if (u >= 0 && u < V && v >= 0 && v < V) {
        dist[u][v] = w;
    }
}

void Graph::floydWarshall() {
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != numeric_limits<int>::max() && dist[k][j] != numeric_limits<int>::max()) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

void Graph::printSolution() {
    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == numeric_limits<int>::max()) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}
