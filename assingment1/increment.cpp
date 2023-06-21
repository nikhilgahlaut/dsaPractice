//[1,2,3]         
//123 + 1 = 1234 
// [1,2,3,4]
#include<iostream>
#include<vector>
#include<math.h>
 using namespace std;
 int main()
 {
    vector <int> arr = {1,2,3};
    vector <int> newArr;
    int len = arr.size();
    int  num = 0;
    for (int i = 0; i < len; i++)
    {
        num = num + arr[i]*pow(10,len-i-1);
    }
    num++;
    for(int i =0; i<len;i++)
    {
       int temp = num % 10;
       num = num / 10;
       newArr.push_back(temp);
    } 
    for (int i = (len-1); i >= 0; i--)
    {
        /* code */
        cout<<newArr[i];
    }
    
    return 0;
 }
