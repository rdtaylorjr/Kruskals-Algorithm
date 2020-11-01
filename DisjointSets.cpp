/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file DisjointSets.cpp
 @author Russell Taylor
 @date 10/24/20
*/

#include "DisjointSets.hpp"

/**
 * Constructor
 * @param elements the initial number of disjoint sets
 */
DisjointSets::DisjointSets(int elements) : sets(elements, -1) {

}

/**
 * Finds which set contains an element, with path compression
 * @param x the element to find
 * @return the name of the set which contains the element
 */
int DisjointSets::find(int x) {
    if (sets[x] < 0)
        return x;
    else
        return sets[x] = find(sets[x]);
}

/**
 * Merges the two disjoint sets into a new set
 * @param rootA the root of the first set
 * @param rootB the root of the second set
 */
void DisjointSets::unionSets(int rootA, int rootB) {
    if (sets[rootB] < sets[rootA])
        sets[rootA] = rootB;
    else {
        if (sets[rootA] == sets[rootB])
            --sets[rootA];
        sets[rootB] = rootA;
    }
}
