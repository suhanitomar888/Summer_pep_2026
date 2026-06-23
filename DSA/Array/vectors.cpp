#include<iostream>
#include<vector>
using namespace std;
int main(){
    //pushback
    vector<int> vec1;
    vec1.push_back(10);
    cout << vec1.at(0) << endl;
    for(int i : vec1){
        cout << i << " ";
    }
    //popback
    vec1.pop_back();
    //size
    cout << "\n" << vec1.size();
    //clear
    vec1.clear();
    return 0;
}