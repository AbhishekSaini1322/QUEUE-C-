#include<iostream>
#include<queue>
using namespace std;

class Cqueue{
    public:

    int *arr;
    int size;
    int front;
    int rear;

    Cqueue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    int push(int val){
        // overflow
            if(front == 0 && rear == size-1){
                cout<<"OVERFLOW"<<endl;
                return 0;
            }
        // empty case first element
            if(front == -1 && rear == -1){
                front++;
                rear++;
                arr[rear] = val;
            }
        // circular nature
            if(rear == size-1 && front != 0 ){
                rear = 0;
                arr[rear] = val;
            }
        // normal case
            else{
                rear++;
                arr[rear] = val;
            }
    }

    void pop(){
        // UNDERFLOW
        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
        }
        // single element
        if( front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // circular nature
        if(front == size-1){
            arr[front] = -1;
            front = 0;
        }
        // normal case
        else{
            arr[front] = -1;
            front++;
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

    Cqueue q(5);
    // q.print();

    q.push(20);
    q.print();

    
    q.push(20);
    q.print();

    
    q.push(20);
    q.print();


    return 0;
}