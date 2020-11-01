/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file Graph.cpp
 @author Russell Taylor
 @date 10/24/20
*/

#include <iostream>
#include <fstream>
#include "Graph.hpp"
#include "PriorityQueue.hpp"
#include "DisjointSets.hpp"
using namespace std;

/**
 Reads from input file
 @param file the file number
 */
void Graph::input(const string& file) {
    ifstream fin("in" + file + "_edges.txt");
    int u, v, weight;
    
    fin.ignore(50, '\n');
    
    while (fin >> u >> v >> weight) {
        Edge e(u, v, weight);
        edges.push_back(e);
        if (vertices < v + 1)
            vertices = v + 1;
    }

    fin.close();
}

/**
 Writes to output file
 @param file the file number and letter
 */
void Graph::output(const string& file) {
    ofstream fout("out" + file + "_edges.txt");
    
    fout << "Graph edges: vertex1, vertex2, weight of the edge\n\n";
    for (Edge& e : edges)
        fout << "edge: " << e.getU() << ", " << e.getV() << ", " << e.getWeight() << '\n';
    
    fout << "\nKruskal spanning tree edges: vertex1, vertex2, weight of the edge\n\n";
    for (Edge& e : minimumSpanningTree)
        fout << "edge: " << e.getU() << ", " << e.getV() << ", " << e.getWeight() << '\n';
    
    fout << "\nKruskal spanning tree weight is " << weight << "\n";
    
    fout.close();
}

/**
 Finds a minimum spanning tree using Kruskal's algorithm
 */
void Graph::kruskal() {
    PriorityQueue<Edge> priorityQueue(edges);
    DisjointSets disjointSets(vertices);

    while (minimumSpanningTree.size() < vertices - 1) {
        Edge edge = priorityQueue.pop();
        int uSet = disjointSets.find(edge.getU());
        int vSet = disjointSets.find(edge.getV());
        
        if (uSet != vSet) {
            minimumSpanningTree.push_back(edge);
            disjointSets.unionSets(uSet, vSet);
            weight += edge.getWeight();
        }
    }
}
