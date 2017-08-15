#include<iostream>
#include<map>
#include<string>
#include<utility>

using namespace std;

int main(){
	string str;
	map<string,int> map;
	while(1){
		cout<<"input your string:";
		cin>>str;
		if(str=="quit")
			break;
		int n=map.count(str);
		if(n>0)
			cout<<"you have already inputed this string for "<<n<<"times"<<endl;
		else
			cout<<"you don't have inputed this word."<<endl;
		pair<string,int> pair=make_pair(str,n+1);
		map.insert(pair);
	}

	return 0;
}