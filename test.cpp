
#include <bits/stdc++.h>
#include<vector>

using namespace std;

void compare(vector<int> &arr){

    int n = arr.size();
    int count = 0;
    vector <int> ans;
    int ansIndex = 0;
    bool check = false;

    for ( int i = 0; i < n ; i++){

        if(ans.size() == 0){
            ans.push_back(arr[i]);
            check = true;
        } 
        else{
            bool iFound ; 
            for(int j = 0; j < ans.size(); j++){
                if(arr[i] == ans[j]){
                    iFound = true;
                    break;
                }else{
                    iFound = false;
                }
            }
            if(iFound == false){
                ansIndex++;
                ans.push_back(arr[i]);
                check = true;
            }
        }

        if(check){
            for( int j = 0; j<n; j++) {
                if(ans[ansIndex] == arr[j]){
                    count++;
                }
            }
            cout<<"Element " << arr[i] << " = " << count<<endl;
            count = 0;
            check = false;
        }
    }
}

int main(){

    vector < int > arr = {1,2,1,4,2,3,4,5,7};

    // sort(arr.begin(), arr.end());
    compare(arr);

    // time complexity = O(n^2)
    // space complexity  = o(n)
    return 0;
}