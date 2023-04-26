#include <iostream>
#include "Graph.hpp"

using namespace std;

int main()
{
    Graph graph;
    graph.neighbor(3);
    graph.distance(13, 10);
    graph.print();
}