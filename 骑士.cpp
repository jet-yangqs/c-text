#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<iterator>
#include<ctime>
#include<typeinfo>

using namespace std;

template<class T>
void knight(T k,int m,int n){
	if(m<1||n<1){
		cout<<"wrong input"<<endl;
	}
	for(int i=1;i<=n;i++){
		k.push_back(i);
	}
   T::iterator iter=k.begin(),del;
	int counter=1;
	clock_t start=clock(),finish;
	while(k.size()>1){
		while(counter%m==0&&k.size()>1){
			counter=1;
			if(typeid(k)!=typeid(list<int>))
				iter=k.erase(iter);
			else{
                del=iter;
                iter++;
                k.erase(del);
		     }
		    if(iter==k.end())
		    	iter=k.begin();
		}
		counter++;
		iter++;
		if(iter==k.end())
			iter=k.begin();
	}
	finish=clock();
	cout<<"the number of the man stile in the container is "<<*iter<<endl;
	cout<<"the container is "<<typeid(k).name()<<end;
	cout<<"using time:"<<(finish-start)/CLOCKS_PER_SEC<<" second(s)."<<endl;
}

int main(){
	vector<int> v;
	deque<int> d;
	list<int> l;
	knight(v,100000,5);
	knight(d,100000,5);
	knight(l,100000,5);
	return 0;
}