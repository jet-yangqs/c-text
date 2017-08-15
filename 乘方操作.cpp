#include<iostream>
#include<iterator>
#include<list>
#include<ctime>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

int random(){
	return rand()%10;
}
int power(double x,double y){
	return (int)(pow(1.0*x,1.0*y)+0.5);
}
int main(){
	srand((int)time(0));
	list<int> l(10);
	generate(l.begin(),l.end(),random);
	list<int>l1(l),l2(l),l3(l);
	cout<<"element of the list:";
	copy(l.begin(), l.end(),ostream_iterator<int>(cout," "));
	
	transform(l1.begin(), l1.end(),l1.begin(),l1.begin(),power);
	cout<<"\n for each element of ,its n^n is:";
	copy(l1.begin(), l1.end(),ostream_iterator<int>(cout," "));
	
	transform(l2.begin(), l2.end(),l2.begin(),bind2nd(ptr_fun(power),7));
	cout<<"\n for each element of ,its n^7 is:";
	copy(l2.begin(), l2.end(),ostream_iterator<int>(cout," "));

	transform(l3.begin(), l3.end(),l3.begin(),bind1st(ptr_fun(power),5));
	cout<<"\n for each element of ,its 5^n is:";
	copy(l3.begin(), l3.end(),ostream_iterator<int>(cout," "));
    cout<<endl;

    return 0;
}