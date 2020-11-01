/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file DisjointSets.hpp
 @author Russell Taylor
 @date 10/24/20
*/

#ifndef DisjointSets_hpp
#define DisjointSets_hpp

#include <vector>
using namespace std;

class DisjointSets {
  public:
    /**
     * Constructor
     * @param elements the initial number of disjoint sets
     */
    explicit DisjointSets(int elements);
    
    /**
     * Finds which set contains an element, with path compression
     * @param x the element to find
     * @return the name of the set which contains the element
     */
    int find(int x);
    
    /**
     * Merges the two disjoint sets into a new set
     * @param rootA the root of the first set
     * @param rootB the root of the second set
     */
    void unionSets(int rootA, int rootB);

  private:
    vector<int> sets;
};

#endif /* DisjointSet_hpp */
