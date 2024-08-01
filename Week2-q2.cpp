#include<iostream>
#include<map>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<string, int> mp;
    int i = 0;
    while(i < s.length()){
        string temp = "";
        while(i<s.length() && s[i] != ' ' ){
            temp.push_back(s[i]);
            i++;
        }
        i++;
        mp[temp]++;
    }
    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }
}