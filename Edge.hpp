/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file Edge.hpp
 @author Russell Taylor
 @date 10/24/20
*/

#ifndef Edge_hpp
#define Edge_hpp

class Edge {
public:
    /**
     Constructor
     */
    Edge(int u, int v, int weight);
    
    /**
     Default constructor
     */
    Edge();
    
    /**
     Gets the edge's first vertex
     @return u the edge's first vertex
     */
    int getU();
    
    /**
     Gets the edge's second vertex
     @return v the edge's second vertex
     */
    int getV();
    
    /**
     Gets the edge weight
     @return weight the edge weight
     */
    int getWeight();
    
private:
    int u;
    int v;
    int weight;
};

#endif /* Edge_hpp */
