#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

string longestCommonPrefix(vector<string> &str){

    //sort the array of string
    sort(str.begin(),str.end());

    string s1 = str[0];//first string
    int i =0;
    string s2 = str[str.size() - 1];//last string
    int j = 0;
    //initalize the ans string with default value
    string ans ="none";

    //
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;
            j++;
        }
        else {
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter no of strings :";
    cin>>n;

    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    cout<<"longest common prefix is :"<<longestCommonPrefix(str);
    return 0;
}