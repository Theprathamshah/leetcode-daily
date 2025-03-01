#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> &arr) {
    for(int i = 0;i<arr.size()-1;i++) {
        if(arr[i]==arr[i+1]) {
            arr[i]*=2;
            arr[i+1]=0;
        }
    }
    int counter = 0;
    for(int i = 0;i<arr.size();i++) {
        if(arr[i]!=0) {
            arr[counter++] = arr[i];
        }
    }
    while(counter<arr.size()) {
        arr[counter++] = 0;
    }
    return arr;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res = solution(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
