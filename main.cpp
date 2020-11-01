/**
 Lab 5 - Kruskal's Algorithm
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file main.cpp
 @author Russell Taylor
 @date 10/24/20
 
 "Write a program that reads input files, finds minimum spanning trees using Kruskal’s Algorithm, and prints results to output files."
 
 @pre numbered input files containing the vertices and edge weights of a graph
 @post numbered output files containing the vertices and edge weights of the graph, the vertices and edge weights of the graph's minimum spanning tree, and the total weight of the minimum spanning tree
*/

#include <iostream>
#include <vector>
#include "Graph.hpp"
using namespace std;

/**
 Controls operation of the program
 */
int main(int argc, const char * argv[]) {
    vector<string> files;
    files.push_back("2");
    files.push_back("3");
    
    for (string& file : files) {
        cout << "Input file in" << file << "_edges.txt, ";
        cout << "output file out" << file << "_edges.txt\n";
    
        Graph graph;
        graph.input(file);
        graph.kruskal();
        graph.output(file);
        
        cout << "Done\n";
    }
    
    return 0;
}
