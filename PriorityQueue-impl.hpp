/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file PriorityQueue-impl.hpp
 @author Russell Taylor
 @date 10/24/20
*/

#include <iostream>
#include "PriorityQueue.hpp"

/**
 Constructs a minimum heap
 @param pq an unsorted vector of elements
 */
template <typename T>
PriorityQueue<T>::PriorityQueue(vector<T>& pq) {
    this->pq = pq;
    for (int i = size() / 2 - 1; i >= 0; --i)
        percolateDown(i, size());
}

/**
 Default constructor
 */
template <typename T>
PriorityQueue<T>::PriorityQueue() {
    
}
    
/**
 Pops the minimum element from the heap, moves the last element to the root, and percolates down
 @return the minimum element popped from the heap
 */
template <typename T>
T PriorityQueue<T>::pop() {
    int root = 0;
    T min = pq[root];
    pq[root] = pq[size() - 1];
    pq.pop_back();
    percolateDown(root, size());
    return min;
}
    
/**
 Percolates up recursively
 @param root the index of the root element to be reheaped
 @param bottom the index of the bottom element to be reheaped
 */
template <typename T>
void PriorityQueue<T>::percolateUp(const int& root, const int& bottom) {
    int parent;
    if (bottom > root) {
        parent = (bottom - 1) / 2;
        if (pq[parent] > pq[bottom]) {
            swap(pq[parent], pq[bottom]);
            percolateUp(root, parent);
        }
    }
}
    
/**
 Percolates down recursively
 @param root the index of the root element to be reheaped
 @param size the number of elements to be reheaped
 */
template <typename T>
void PriorityQueue<T>::percolateDown(const int& root, const int& size) {
    int min = root;
    int left = root * 2 + 1;
    int right = left + 1;

    if (left < size && pq[left].getWeight() < pq[min].getWeight())
        min = left;
    
    if (right < size && pq[right].getWeight() < pq[min].getWeight())
        min = right;
    
    if (min != root) {
        swap(pq[root], pq[min]);
        percolateDown(min, size);
    }
}

/**
 Returns the size of the heap
 @return the size of the heap
 */
template <typename T>
int PriorityQueue<T>::size() const {
    return int(pq.size());
}
