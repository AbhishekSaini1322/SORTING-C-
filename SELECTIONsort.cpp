#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>v){
    for(int i=0; i<v.size(); i++){
         cout<<v[i]<<" ";
    }
   
}

void Slectionsort(vector<int> &v){
    int n = v.size();

    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i],v[minIndex]);
    }
}

int main(){
    vector<int> v = {15,4,7,8,1,3};
    Slectionsort(v);
    print(v);

    return 0;
}