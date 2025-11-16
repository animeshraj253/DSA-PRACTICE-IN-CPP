#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector <int> arr = {1,2,3,4,5,6}; // 0 

    cout << arr[0] << endl;

    for (auto i : arr){
        cout << i << " ";
    }

    cout << endl << "another version of for loop" << endl;;
    
    for ( auto i = arr.begin(); i < arr.end(); ++i){
        cout << *i << " ";
    }
    cout << endl;
    
    // size
    cout << "size of vector arr = " << arr.size() <<  endl;

    // push_back
    arr.push_back(58);
    cout<< "after push_back function: " << *(arr.end()-1) << endl;

    // pop_back
    arr.pop_back();
    cout << "after pop_back function: " << *(arr.end()-1) << endl;

    // at 
    cout << "at function: " << arr.at(2) << endl;

    //front
    cout << "front function : " << arr.front() << endl;

    // back
    cout << "back function : " << arr.back() << endl;



    return 0;
}