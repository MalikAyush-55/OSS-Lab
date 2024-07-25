#include<iostream>

using namespace std;

int main(){
    float average = 0;
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        average += arr[i];
    }
    cout << "The average is " << (average/n) << endl;

    return 0;
}
