#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reversequeue(queue<int> &q){
    // create stack
    stack<int> s;

    // saare element ko stack me daal do
    while( !q.empty()){
        int tempfront = q.front();
        q.pop();

        s.push(tempfront);
    }

    // ab saare element ko vapis queue me daal do
    while( !s.empty()){
        int temp = s.top();
        s.pop();

        q.push(temp);
    }
}

// REVERSE THE QUEUE USING RECURSION

void reversewithrecursion(queue<int> &q){

    // base case
    if(q.empty()){
        return;
    }
    // ek case
    int temp = q.front();
    q.pop();

    // recurisve call
    reversewithrecursion(q);

    // backtraking
    q.push(temp);
}

int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    // reversequeue(q);
    reversewithrecursion(q);


    while( !q.empty()){
        int element = q.front();
        q.pop();
        cout<<element<<" ";
    }
}