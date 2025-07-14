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

void pop(int arr[], int data, int &rear, int &front){

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
        cout << ">>>> ";
        cin >> input;

        switch (input) {
            case 1:
                cout << "Enter the data: ";
                cin >> data;
                enqueue(queue, data, rear, front);
                break;
            case 2:
                cout << "Enter the data: ";
                cin >> data;
                pop(queue, data, rear, front);
                break;
            case 3:
                printArray(queue, rear, front);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }


}
int main() {

    runProgram();
}