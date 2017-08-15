#include<iostream>
#include"array.h"
#include<algorithm>
using namespace std;

int main(){
	int a[10]={2,4,3,5,6,7,5,4,6,7};
	Array<int> arr;
	sort(a,a+10);
    copy(a,a+10,arr);
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
		cout<<arr[i]<<" ";
	cout<<endl;
    arr.swap(4,6);
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
		cout<<arr[i]<<" ";
    return 0;
}