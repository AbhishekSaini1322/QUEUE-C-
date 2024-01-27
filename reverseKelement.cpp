#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseKelement(queue<int> &q,int k){
    stack<int> s;
    int n = q.size();

    if(k>n){
        cout<<"NOT POSSIBLE"<<endl;
        return;
    }

    for(int i=0; i<k; i++){
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

    while( !s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    for(int i=0; i<(n-k); i++){
        int element = q.front();
        q.pop();

        q.push(element);
    }
}

int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseKelement(q,5);

    while( !q.empty()){
        int element = q.front();
        q.pop();
        cout<<element<<" ";
    }
}