#include<iostream>
#include<vector>

using namespace std;

bool isAnagram(string s, string t) 
{
    vector <int> freq(26,0);
    if(s.size() != t.size()){
        return false;
    } 
    for(int i =0;i<s.size();i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }
    for(int i =0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
return true;
}

int main(){
    string s,t;
    cin>>s>>t;
    cout<<isAnagram(s,t);
    return 0;
}