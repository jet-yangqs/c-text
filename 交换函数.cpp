#include<iostream>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
	int a[]={0,1,2,3,4,5,6,7,8,9};
	cout<<"element of a[]:";
	copy(a,a+10,ostream_iterator<int>(cout," "));
	cout<<endl;
	int b[10],c[10];
	copy(a,a+10,b);
	copy(a,a+10,c);
    swap(a[4],a[6]);
	cout<<"element of a[] sfter swap function:";
	copy(a,a+10,ostream_iterator<int>(cout," "));
	cout<<endl;
    iter_swap(&b[4],&b[6]);
	cout<<"element of a[] sfter iter_swap function:"; //iter_swap(iter1,iter2)
	copy(b,b+10,ostream_iterator<int>(cout," "));
    cout<<endl;
    swap_ranges(c,c+5,c+5);           //swap_ranges(first1,last1,first2)
    cout<<"element of a[] sfter swap_ranges function:";
	copy(c,c+10,ostream_iterator<int>(cout," "));
	cout<<endl;

	return 0;
}