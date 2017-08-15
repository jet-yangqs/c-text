#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

//使用unique
/*int main(){
	int a[]={5,2,4,2,3,5};
	sort(a,a+6);
	copy(a, a+6,ostream_iterator<int>(cout," "));
	cout<<endl;
	vector<int> vec(a,a+6);
	vector<int>::iterator iter=unique(vec.begin(), vec.end());  //erase,move,move_if return mid, [mid,last)is the element to be deleted,在排序序列里作用
	copy(vec.begin(), vec.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	vec.erase(iter,vec.end());          
	copy(vec.begin(), vec.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	return 0;
}*/



//使用list的unique函数
#include<list>

int main(){
	int a[]={5,2,4,2,3,5};
	sort(a,a+6);
	list<int>l(a,a+6);
	l.unique();
	copy(l.begin(), l.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
    return 0;
}
