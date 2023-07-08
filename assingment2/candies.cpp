#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    vector <int> candyType = {1,1,2,3};
    int len = candyType.size();
    set <int> setCandy;
    for (int i = 0; i < len; i++)
    {
        setCandy.insert(candyType[i]);
    }
    int setCandyLen = setCandy.size();
    if(setCandyLen < len/2){
        cout<< setCandyLen;
    }
    else{
        cout<< len/2;
    }
    
    return 0;
}