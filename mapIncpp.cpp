#include<iostream>
#include<map>

using namespace std;

int main(){
    
    map <int,string> data;

    data[1] = "Animesh";
    data[30] = "MCA";
    data[123] = "Raj";


    data.insert({54,"BCA"});

    for(auto i : data){
        cout<< i.first << " "<<i.second << endl;
    }cout<<endl;

    return 0;
}