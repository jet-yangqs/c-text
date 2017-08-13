#include<iostream>
#include<list>
#include<iterator>

using namespace std;

template <class T>
void exchange(list<T>& l1,class list<T>::iterator iter1,list<T>& l2,class list<T>::iterator iter2){
	list<T>temp;
	temp.splice(temp.begin(),l1,iter1,l1.end());
	l1.splice(l1.end(),l2,iter2,l2.end());
	l2.splice(l2.end(),temp,temp.begin(),temp.end());
}

int main(){
	int i1[]={1,3,4,2,5,6,8,4};
	int i2[]={2,4,6,3,5,7,8,0};
    list<int>l1(i1, i1+8),l2(i2, i2+8);
    cout<<"the first list before exchange:";
    copy(l1.begin(), l1.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
    cout<<"the second list before exchange:";
    copy(l2.begin(), l2.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
    
    list<int>:: iterator p1=l1.begin(),p2=l2.begin();
    advance(p1,3);
    advance(p2,4);

    exchange(l1,p1,l2,p2);
    cout<<"the first list after exchange:";
    copy(l1.begin(), l1.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
    cout<<"the second list after exchange:";
    copy(l2.begin(), l2.end(),ostream_iterator<int>(cout," "));
    cout<<endl;

    return 0;
}