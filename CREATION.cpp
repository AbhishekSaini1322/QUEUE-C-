#include<iostream>
#include<queue>
using namespace std;


class Queue{
 public:

     int *arr;
     int size;
     int front;
     int rear;

     Queue (int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
     }

     void push(int val){
        // check full
        if(rear == size-1){ 
            cout<<"overflow"<<endl;
            return ;
        }
        else if(rear ==-1 && front == -1){
            // empty case
            front++;
            rear++;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }

     }

     void pop(){
        // check empty UNDERFLOW CONDITION
        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
            return;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            // norma; case
            arr[front] = -1;
            front++;
        }

     }

     bool isempty() {
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
     }

     int getsize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else{
             return rear-front+1;
        }
       
     }

     int getfront(){
        if(front == -1){
            cout<<"no elemnt in queue"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
     }

     void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
};


int main(){
//  creation
    Queue q(5);
    // q.print();

    q.push(10);
    // q.print();

    
    q.push(10);
    // q.print();

    
    q.push(10);
    // q.print();

    
    q.push(10);
    // q.print();

    
    q.push(10);
    q.print();

    
    // q.push(10);
    // q.print();

    q.pop();
    // q.print();

    q.pop();
    q.print();
    q.pop();
    q.pop();
    q.pop();
       q.print();

       q.pop();
    

   q.getfront();


    return 0;
}