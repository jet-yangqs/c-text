#include<stack>
#include<queue>
#include<iostream>

using namespace std;

int main(){
	stack<int> s;
	queue<int> q;
	priority_queue<int> pq;
	int a[]={5,1,4,6};
	for(int i=0;i<4;i++){
		s.push(*(a+i));
		q.push(*(a+i));
		pq.push(*(a+i));
	}

	cout<<"element of stack after the first pop progress:"<<s.top()<<endl;
	s.pop();
	cout<<"element of stack after the second pop progress:"<<s.top()<<endl;
	s.pop();
	cout<<"element of queue after the first pop progress:"<<q.front()<<endl;
	q.pop();
	cout<<"element of queue after the second pop progress:"<<q.front()<<endl;
	q.pop();
	cout<<"element of priority_queue after the second pop progress:"<<pq.top()<<endl;
	pq.pop();
	cout<<"element of priority_queue after the second pop progress:"<<pq.top()<<endl;
	pq.pop();

	s.push(2);s.push(3);
	q.push(2);q.push(3);
	pq.push(2);pq.push(3);
	
    cout<<"element of stack after the first pop progress:"<<s.top()<<endl;
	s.pop();
	cout<<"element of stack after the second pop progress:"<<s.top()<<endl;
	s.pop();
	cout<<"element of queue after the first pop progress:"<<q.front()<<endl;
	q.pop();
	cout<<"element of queue after the second pop progress:"<<q.front()<<endl;
	q.pop();
	cout<<"element of priority_queue after the second pop progress:"<<pq.top()<<endl;
	pq.pop();
	cout<<"element of priority_queue after the second pop progress:"<<pq.top()<<endl;
	pq.pop();
    
    return 0;
}