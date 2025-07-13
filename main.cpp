#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

void enqueue(int arr[], int data, int &rear, int &front) {
    if (rear == MAX_SIZE - 1) {
        cout << "Limit reached" << endl;
    }
    else {

        if (front == -1){
            front = 0;
        }
        rear++;
        arr[rear] = data;
    }
}

void dequeue(int arr[], int data, int &rear, int &front){

    int i = 0;
    if (rear == -1) {
        cout << "Queue is empty" << endl;
    }
    else {

    }

}

void examineElement() {

}
int main() {
    int rear = -1;
    int front = -1;
    int queue[MAX_SIZE];

}