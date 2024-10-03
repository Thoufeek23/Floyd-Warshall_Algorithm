#ifndef FLOYDWARSHALL_H
#define FLOYDWARSHALL_H

#include <iostream>
#include <vector>
#include <limits>

class Graph {
private:
    int V;
    std::vector<std::vector<int>> dist;

public:
    Graph(int V);
    void addEdge(int u, int v, int w);
    void floydWarshall();
    void printSolution();
};

#endif
