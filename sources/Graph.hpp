#pragma once
#include <iostream>

using namespace std;

class Graph
{
private:
    int list[15][15];
    string vertices[15] = {"Mohave", "Coconino", "Navajo", "Apache", "Greenlee", "Cochise", "Santa Cruz", "Pima", "Pinal", "Graham", "Gila", "Yavapai", "La Paz", "Yuma", "Maricopa"};

public:
    Graph();
    void neighbor(int IDX);
    void distance(int start, int end);
    void print();
};
