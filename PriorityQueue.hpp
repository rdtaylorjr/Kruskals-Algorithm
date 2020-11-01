/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file PriorityQueue.hpp
 @author Russell Taylor
 @date 10/24/20
*/

#ifndef PriorityQueue_hpp
#define PriorityQueue_hpp

#include <vector>
using namespace std;

template <typename T>
class PriorityQueue {
public:
    
    /**
     Constructs a minimum heap
     @param list an unsorted vector of elements
     */
    PriorityQueue(vector<T>& list);
    
    /**
     Default constructor
     */
    PriorityQueue();
    
    /**
     Pops the minimum element from the heap, moves the last element to the root, and percolates down
     @return the minimum element popped from the heap
     */
    T pop();
    
private:
    vector<T> pq;
    
    /**
     Percolates up recursively
     @param root the index of the root element to be reheaped
     @param bottom the index of the bottom element to be reheaped
     */
    void percolateUp(const int& root, const int& bottom);
    
    /**
     Percolates down recursively
     @param root the index of the root element to be reheaped
     @param size the number of elements to be reheaped
     */
    void percolateDown(const int& root, const int& size);
    
    /**
     Returns the size of the heap
     @return the size of the heap
     */
    int size() const;
};

#include "PriorityQueue-impl.hpp"

#endif /* PriorityQueue_hpp */
