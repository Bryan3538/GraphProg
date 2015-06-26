/*
	Ch12 Programming Exercises
	Bryan Fulton
	1: depth-first traversal
	2: breadth-first traversal
	3: shortest path

	Instructions:
		Enter 'graph.txt' as a file name to create
		the graph, the program will do the rest.
*/
#include <iostream>
#include "weightedGraph.h"
using namespace std;

int main() {
	weightedGraphType myGraph(6);
	myGraph.createWeightedGraph();

	cout << "Depth First: ";
	myGraph.depthFirstTraversal();
	cout << endl << "Breadth First: ";
	myGraph.breadthFirstTraversal();
	cout << endl << endl;
	myGraph.shortestPath(0);
	myGraph.printShortestDistance(0);
	cout << endl;

	
	system("pause");
	return 0;
}