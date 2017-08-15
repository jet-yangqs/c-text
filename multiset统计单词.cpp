#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
	string str;
	multiset<string>strset;
	while(1){
		cout<<"input your string:";
		cin>>str;
		if(str=="quit")
			break;
		int counter=strset.count(str);
		if(counter>0)
			cout<<"you have inputed this string for "<<counter<<"times"<<endl;
		else
			cout<<"you don't have inputed this string."<<endl;
		strset.insert(str);
	}

	return 0;
}