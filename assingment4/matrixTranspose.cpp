#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int> > temp(matrix[0].size(), vector<int> (matrix.size()));
    for(int i =0 ; i< matrix.size();i++){
        for(int j = 0; j<matrix[0].size();j++){
            temp[j][i] = matrix[i][j];
        }
    }
    for(int i =0 ; i< temp.size();i++){
        for(int j = 0; j<temp[i].size();j++){
            cout<<temp[i][j];
        }
        cout<<endl;
    }

    return 0;
}