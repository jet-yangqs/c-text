#ifndef ARRAY_H_
#define ARRAY_H_
#include<cassert>

template <class T>
class Array{
private:
	T*list;
	int size;
public:
	Array(int sz=50);
	Array(const Array<T>&a);
	~Array();
	Array<T>& operator=(const Array<T>&rhs);//重载“=”，使数组对象可以整体赋值
	T& operator[](int i);  //重载[]，使得Array对象可以起到普通数组的作用
	const T& operator[](int i) const;//[]针对const的重载
	operator T*();//重载到T*类型的转换，是array对象可以起到c++普通数组的作用
	operator const T*() const;//到T*类型的转换针对const的重载，使array对象可以起到c++普通数组的作用
    int getsize() const;
    void resize(int sz);
    void swap(int i,int j);
};

template<class T>
Array<T>::Array(int sz){
	assert(sz>=0);
	size=sz;
	list=new T[size];
}

template<class T>
Array<T>::~Array(){delete []list;}

template<class T>  //复制构造
Array<T>::Array(const Array<T>& a){
	size=a.size;
	list=new T[size];
	for(int i=0;i<size;i++)
		list[i]=a.list[i];
}

template<class T>  //实现对象之间整体赋值
Array<T>&Array<T>::operator=(const Array<T>&rhs){
	if(&rhs!=this){   //如果本对象中数组大小与rhs不同，删除原有内存，重新分配
		if(size!=rhs.size){
			delete []list;
			size=rhs.size;
			list=new[size];
		}
		for(int i=0;i<size;i++)
			list[i]=rhs.list[i];
	}
	return *this;
}

template<class T>
T&Array<T>::operator[](int n){   //重载后返回类型为T的引用
	assert(n>=0 && n<size);
	return list[n];
}

template<class T>
const T&Array<T>::operator[](int n)const{   //重载后返回类型为T的引用
	assert(n>=0 && n<size);
	return list[n];
}

template<class T>
Array<T>::operator T*(){
	return list;
}

template<class T>
Array<T>::operator const T*() const{
	return list;
}

template<class T>
int Array<T>::getsize()const{
	return size;
}

template<class T>
void Array<T>::resize(int sz){
	assert(sz>=0);
	if(size==sz)
		return;
	T* newlist=new T[sz];
	int n=(sz<size)?sz:size; 
    for(int i=0;i<n;i++)
    	newlist[i]=list[i];
    delete [] list;
    list=newlist;
    size=sz;
}
template<class T>
void Array<T>::swap(int i,int j){
	if(i<0||j<0||i>=size||j>=size)
		return;
	T temp=list[i];
	list[i]=list[j];
    list[j]=temp;
}
#endif