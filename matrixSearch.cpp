// search the target element in matrix and return 1 if found else 0./
//matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}}
//target 3
#include<iostream>
#include<vector>

using namespace std;

int findInMatrix(vector<vector<int>> &a,vector<int> temp, int n,int m,int t){

    //inserting all the matrix element into a vector
    for(int i =0;i <n;i++){
        for(int j=0;j<m;j++){
            temp.push_back(a[i][j]);
        }
    }
//implementing binary search on the vector
    int l =0;
    int r = n*m - 1;
    int ans = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(temp[mid]== t) return ans+=1;

        else if(temp[mid]>t) r = mid -1;

        else l = mid + 1;
    }

    return ans;
}

int main(){
    vector<vector<int>> matrix= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 78;
    //take a vector to store 2d matrix's elements
    vector<int> temp;
    int n = matrix.size();
    int m = matrix[0].size();

    //calling the function we made
    cout<<findInMatrix(matrix,temp,n,m,target);

    return 0;
}