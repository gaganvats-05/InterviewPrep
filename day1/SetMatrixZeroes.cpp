// Question Link - https://leetcode.com/problems/set-matrix-zeroes/
#include <bits/stdc++.h>
using namespace std;

// approach-- use the first column and row as indicator for setting corresponding row/column to zero

void setZeroes(vector<vector<int>>& matrix) {
    int rows=matrix.size();
    int columns=matrix[0].size();
    bool col0=false;
    //iterate through the matrix
    for (int  i = 0; i < rows; i++)
    {
        if(matrix[i][0]==0)col0=true;
        for (int  j = 1; j < columns; j++)
        {
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            } 
        }  
    }
    for (int i = rows-1; i >=0; i--)
    {
        for (int j = columns-1; j>=1;j--)
        {
            if(matrix[0][j]==0||matrix[i][0]==0)matrix[i][j]=0;
        } 
        if(col0)matrix[i][0]=0;
    }   
}