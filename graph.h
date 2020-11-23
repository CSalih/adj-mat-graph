#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

class Graph {
private:
    int nodecount;               // Node count (sufficient to define node set)
    bool directed;               // true for directed, false for undirected
    // TO BE COMPLETED: Data structure for adjacency matrix
    // ...

    vector<vector<int>> adjMatrix; // adjacency matrix
public:
    Graph(int nodecount, bool directed);

    // Constructor; node count or directedness cannot be changed later
    // Graph is constructed with empty edge set
    bool is_directed() const;  // Getter method
    bool is_node(int i) const; // Check if node exists
    int get_nodecount() const; // Getter method
    list<int> get_edges(int i) const; // Getter method for outgoing edges
    bool is_edge(int i, int j) const; // Check whether edge exists
    bool insert_edge(int i, int j);

    // Insert (directed or undirected) edge
    // Return value indicates whether an edge was inserted successfully
    bool remove_edge(int i, int j);
    // Delete (directed or undirected) edge
    // Return value indicates whether an edge was removed successfully

    int get_weight(int i, int j) const { return adjMatrix[i][j]; }
};

// Print graph to output stream (human-readable)
void printgraph(ostream &os, Graph g);

// Read directed or undirected graph from file
Graph readgraphfromfile(string infilename, bool directed);

// Write directed or undirected graph to file
void writegraphtofile(string outfilename, Graph g);

#endif // #ifndef GRAPH_H
