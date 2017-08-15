#include<iostream>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
	const int size1=6,size2=4;
	int a1[size1],a2[size2];
	ostream_iterator<int>output(cout," ");

	cout<<"intput the first array 6 ints:";
	for(int i=0;i<size1;i++)
		cin>>a1[i];
	cout<<"intput the second array 4 ints:";
	for(int i=0;i<size2;i++)
		cin>>a2[i];
	sort(a1,a1+sizeof(a1)/sizeof(int));
	sort(a2,a2+4);
	cout<<"the first array:";
	copy(a1,a1+6,output);
	cout<<endl;
	cout<<"the second array:";
	copy(a2,a2+4,output);
    cout<<endl;

    int b[size1+size2];
    int*p1=set_intersection(a1,a1+size1,a2,a2+size2,b);   //set_intersection(first1,last1,first2,last2,result)
    cout<<"intersection of the two int array:";
    copy(b,p1,output);
    cout<<endl;

    int c[size2+size1];
    int *p2=set_union(a1,a1+size1,a2,a2+size2,c);      //set_union(first1,last1,first2,last2,result)
    cout<<"the union of the two array:";
    copy(c,p2,output);
    cout<<endl;

    int d[size1+size2];
    int *p3=set_difference(a1,a1+size1,a2,a2+size2,d);       //set_difference(first1,last1,first2,last2,result)
    cout<<"the difference of the first array from second one:";
    copy(d,p3,output);
    cout<<endl;

    return 0;
}