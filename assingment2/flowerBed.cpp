#include<iostream>
#include<vector>
#include<set>

using namespace std;
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        for (int i = 0; i < flowerbed.size(); i++) {

            if ((flowerbed[i] == 0) && (i == 0 || flowerbed[i-1] == 0) &&
             (i == flowerbed.size() - 1 || flowerbed[i+1] == 0)) {
                flowerbed[i] = 1;
                n--;
            }
        }
        if (n > 0)
            return false;
        return true;
    }

int main(){
    vector <int> flowerbed = {1,0,1,0,1,0,1};
    int n = 2;
    cout<<canPlaceFlowers(flowerbed,n);

    
    return 0;
}