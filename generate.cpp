#include<iostream>
#include<iterator>
#include<ctime>
#include<list>
//#include<cstdio>
#include<algorithm>
using namespace std;

int random(){
	return (rand()%10);
}

int main(){
	list<int> l(10);
	srand((int)(time(0)));
	generate(l.begin(), l.end(),random);//generate(first,last,gen),with no arguments,don't include"()"
	copy(l.begin(),l.end(),ostream_iterator<int>(cout," "));   
	cout<<endl;
	return 0;
}