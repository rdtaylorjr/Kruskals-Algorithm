/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file Edge.cpp
 @author Russell Taylor
 @date 10/24/20
*/

#include "Edge.hpp"

/**
 Constructor
 */
Edge::Edge(int u, int v, int weight) {
    this->u = u;
    this->v = v;
    this->weight = weight;
}

/**
 Default constructor
 */
Edge::Edge() {
    
}

/**
 Gets the edge's first vertex
 @return u the edge's first vertex
 */
int Edge::getU() {
    return u;
}

/**
 Gets the edge's second vertex
 @return v the edge's second vertex
 */
int Edge::getV() {
    return v;
}

/**
 Gets the edge weight
 @return weight the edge weight
 */
int Edge::getWeight() {
    return weight;
}

