#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int i = 0;
    int j = s.length()-1;
    while(i != j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
}
