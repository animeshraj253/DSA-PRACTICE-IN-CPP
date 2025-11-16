#include<iostream>

using namespace std;

int score = 5;

void a (){
    cout << "Score in a " << score << endl;
}
void b (){
    cout << "Score in b " << score << endl;
}


int main(){
    cout << endl;

    a();
    b();
    cout << "Score in main " << score << endl;

    cout << endl;
    return 0;
}