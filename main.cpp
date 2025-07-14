#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

//{front, n, n, rear}
//pop
//push

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

    if (rear == -1) {
        cout << "Queue is empty" << endl;
    }
    else {
        front++;
    }

}

void examineElement(int arr[], int data, int rear, int front) {

}

void printArray(int arr[], int rear, int front) {
    if (rear == -1) {
        cout << "List is empty!" << endl;
    }
    else {
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    }
}

void runProgram() {
    int rear = -1;
    int front = -1;
    int queue[MAX_SIZE];
    int data;
    int input;

    while (input != 4) {

        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Print Array" << endl;
        cout << "4. Exit" << endl;
    }


}
int main() {




}