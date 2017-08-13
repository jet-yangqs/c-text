#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> ivec;
	int n;
	for (int i=0;i<10;i++){
		cin>>n;
		ivec.push_back(n);
		cout<<"增加一个元素后容量："<<ivec.capacity()<<endl;
	}

	return 0;
}

