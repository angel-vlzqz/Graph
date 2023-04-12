#include <iostream>
#include "Adder.hpp"

using namespace std;

int main()
{
    int list[15][15];
    string vertices[15] = {"Mohave", "Coconino", "Navajo", "Apache", "Greenlee", "Cochise", "Santa Cruz", "Pima", "Pinal", "Graham", "Gila", "Yavapai", "La Paz", "Yuma", "Maricopa"};

    list[0][0] = 0;
    list[0][1] = 14;
    list[0][2] = 0;
    list[0][3] = 0;
    list[0][4] = 0;
    list[0][5] = 0;
    list[0][6] = 0;
    list[0][7] = 0;
    list[0][8] = 0;
    list[0][9] = 0;
    list[0][10] = 0;
    list[0][11] = 14;
    list[0][12] = 9;
    list[0][13] = 0;
    list[0][14] = 0;

    list[1][0] = 14;
    list[1][1] = 0;
    list[1][2] = 9;
    list[1][3] = 0;
    list[1][4] = 0;
    list[1][5] = 0;
    list[1][6] = 0;
    list[1][7] = 0;
    list[1][8] = 0;
    list[1][9] = 0;
    list[1][10] = 17;
    list[1][11] = 9;
    list[1][12] = 0;
    list[1][13] = 0;
    list[1][14] = 0;

    list[2][0] = 0;
    list[2][1] = 9;
    list[2][2] = 0;
    list[2][3] = 5;
    list[2][4] = 0;
    list[2][5] = 0;
    list[2][6] = 0;
    list[2][7] = 0;
    list[2][8] = 0;
    list[2][9] = 20;
    list[2][10] = 13;
    list[2][11] = 0;
    list[2][12] = 0;
    list[2][13] = 0;
    list[2][14] = 0;

    list[3][0] = 0;
    list[3][1] = 0;
    list[3][2] = 5;
    list[3][3] = 0;
    list[3][4] = 17;
    list[3][5] = 0;
    list[3][6] = 0;
    list[3][7] = 0;
    list[3][8] = 0;
    list[3][9] = 19;
    list[3][10] = 0;
    list[3][11] = 0;
    list[3][12] = 0;
    list[3][13] = 0;
    list[3][14] = 0;

    list[4][0] = 0;
    list[4][1] = 0;
    list[4][2] = 0;
    list[4][3] = 17;
    list[4][4] = 0;
    list[4][5] = 16;
    list[4][6] = 0;
    list[4][7] = 0;
    list[4][8] = 0;
    list[4][9] = 4;
    list[4][10] = 0;
    list[4][11] = 0;
    list[4][12] = 0;
    list[4][13] = 0;
    list[4][14] = 0;

    list[5][0] = 0;
    list[5][1] = 0;
    list[5][2] = 0;
    list[5][3] = 0;
    list[5][4] = 16;
    list[5][5] = 0;
    list[5][6] = 8;
    list[5][7] = 9;
    list[5][8] = 0;
    list[5][9] = 12;
    list[5][10] = 0;
    list[5][11] = 0;
    list[5][12] = 0;
    list[5][13] = 0;
    list[5][14] = 0;

    list[6][0] = 0;
    list[6][1] = 0;
    list[6][2] = 0;
    list[6][3] = 0;
    list[6][4] = 0;
    list[6][5] = 8;
    list[6][6] = 0;
    list[6][7] = 6;
    list[6][8] = 0;
    list[6][9] = 0;
    list[6][10] = 0;
    list[6][11] = 0;
    list[6][12] = 0;
    list[6][13] = 0;
    list[6][14] = 0;

    list[7][0] = 0;
    list[7][1] = 0;
    list[7][2] = 0;
    list[7][3] = 0;
    list[7][4] = 0;
    list[7][5] = 9;
    list[7][6] = 6;
    list[7][7] = 0;
    list[7][8] = 7;
    list[7][9] = 12;
    list[7][10] = 0;
    list[7][11] = 0;
    list[7][12] = 0;
    list[7][13] = 23;
    list[7][14] = 10;

    list[8][0] = 0;
    list[8][1] = 0;
    list[8][2] = 0;
    list[8][3] = 0;
    list[8][4] = 0;
    list[8][5] = 0;
    list[8][6] = 0;
    list[8][7] = 7;
    list[8][8] = 0;
    list[8][9] = 13;
    list[8][10] = 5;
    list[8][11] = 0;
    list[8][12] = 0;
    list[8][13] = 0;
    list[8][14] = 6;

    list[9][0] = 0;
    list[9][1] = 0;
    list[9][2] = 20;
    list[9][3] = 19;
    list[9][4] = 4;
    list[9][5] = 12;
    list[9][6] = 0;
    list[9][7] = 12;
    list[9][8] = 13;
    list[9][9] = 0;
    list[9][10] = 7;
    list[9][11] = 0;
    list[9][12] = 0;
    list[9][13] = 0;
    list[9][14] = 0;

    list[10][0] = 0;
    list[10][1] = 17;
    list[10][2] = 13;
    list[10][3] = 0;
    list[10][4] = 0;
    list[10][5] = 0;
    list[10][6] = 0;
    list[10][7] = 0;
    list[10][8] = 5;
    list[10][9] = 7;
    list[10][10] = 0;
    list[10][11] = 18;
    list[10][12] = 0;
    list[10][12] = 0;
    list[10][14] = 8;

    list[11][0] = 14;
    list[11][1] = 9;
    list[11][2] = 0;
    list[11][3] = 0;
    list[11][4] = 0;
    list[11][5] = 0;
    list[11][6] = 0;
    list[11][7] = 0;
    list[11][8] = 0;
    list[11][9] = 0;
    list[11][10] = 18;
    list[11][11] = 0;
    list[11][12] = 15;
    list[11][0] = 0;
    list[11][14] = 9;

    list[12][0] = 9;
    list[12][1] = 0;
    list[12][2] = 0;
    list[12][3] = 0;
    list[12][4] = 0;
    list[12][5] = 0;
    list[12][6] = 0;
    list[12][7] = 0;
    list[12][8] = 0;
    list[12][9] = 0;
    list[12][10] = 0;
    list[12][11] = 15;
    list[12][12] = 0;
    list[12][13] = 11;
    list[12][14] = 15;

    list[13][0] = 0;
    list[13][1] = 0;
    list[13][2] = 0;
    list[13][3] = 0;
    list[13][4] = 0;
    list[13][5] = 0;
    list[13][6] = 0;
    list[13][7] = 23;
    list[13][8] = 0;
    list[13][9] = 0;
    list[13][10] = 0;
    list[13][11] = 0;
    list[13][12] = 11;
    list[13][13] = 0;
    list[13][14] = 18;

    list[14][0] = 0;
    list[14][1] = 0;
    list[14][2] = 0;
    list[14][3] = 0;
    list[14][4] = 0;
    list[14][5] = 0;
    list[14][6] = 0;
    list[14][7] = 10;
    list[14][8] = 6;
    list[14][9] = 0;
    list[14][10] = 8;
    list[14][11] = 9;
    list[14][12] = 15;
    list[14][13] = 18;
    list[14][14] = 0;

    for (auto i = 0; i < 15; i++)
    {
        for (auto j = 0; j < 15; j++)
        {
            cout << list[i][j] << "\t";
        }
        cout << endl;
    }

    for (auto i = 0; i < 15; i++)
    {
        cout << vertices[i] << endl;
    }
}