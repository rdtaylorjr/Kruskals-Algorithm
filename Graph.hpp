/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file Graph.hpp
 @author Russell Taylor
 @date 10/24/20
*/

#ifndef Graph_hpp
#define Graph_hpp

#include <vector>
#include "Edge.hpp"
using namespace std;

class Graph {
public:
    /**
     Reads from input file
     @param file the file number
     */
    void input(const string& file);
    
    /**
     Writes to output file
     @param file the file number and letter
     */
    void output(const string& file);
    
    /**
     Finds a minimum spanning tree using Kruskal's algorithm
     */
    void kruskal();
    
private:
    vector<Edge> edges;
    vector<Edge> minimumSpanningTree;
    int vertices = 0, weight = 0;
};

#endif /* Graph_hpp */
