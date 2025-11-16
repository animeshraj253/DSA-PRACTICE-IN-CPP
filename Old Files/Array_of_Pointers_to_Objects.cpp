#include <iostream>
#include <cstring>

using namespace std;

// Array of pointers to object
class person{
	private:
		char name[20];
	public:
		void get(){
			cout<<"Enter name"<< endl;
			cin.getline(name,20);
		}
		void show(){
			cout<<"Name is: "<<name<<endl;
		}
};

int main(){
	person *ptr[5];
	
	for(int i=0; i<5; i++){
		ptr[i] = new person;
		ptr[i]->get();
	}
	
	cout<<"\nPrinting data....."<<endl;
	for(int i=0; i<5; i++){
		ptr[i]->show();
	}
	
return 0;
}
