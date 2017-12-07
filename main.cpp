#include <iostream>
#include <cstring>

const int SIZE = 20;

using namespace std;

//method queue
class TheQueue{
public:
    int que[SIZE];
    int* firstElement;
    int* lastElement;

    TheQueue(){
        firstElement = que;
        lastElement = que;
    }
    void putTheQueue(int v){
        *lastElement = v;
        lastElement++;
    }
    int getTheQueue(){
        int d = *firstElement;
        firstElement++;
        return d;
    }
    bool isEmpty(){
        if (firstElement == lastElement){
            cout<<"TheQueue is empty ";
            return true;
        } else {
            cout<<"TheQueue is not empty ";
            return false;
        }
    }
};
// method stack
class Stack {
public:
    int* top;
    int stack[SIZE];

    Stack (){
        top = stack;
        stack[SIZE] = NULL;
        counter = 0;
    }
/*
    bool stackisEmpty(){
        Stack st;
        if (st.top == 0){
            cout<<"The stack is empty ";
            return true;
        }
        if (st.top == st.stack) {
            cout<<"The stack is full ";
            return false;
        }
        if ( st.top > st.stack) {
            cout<<"The stack is out of range ";
            return true;
        }
    }
*/
    bool stackEmpty(){
        return bool (top == NULL);
    }

    void pushToStack(int value) {
            if (stackEmpty() == 1){
                cout<<"The stack is empty "<<endl;
                return;
            }
            *top = value;
            top++;
    }

    int getStack(){
        int value = *top;
            if (*top == 0){
                top--;
            }
            top--;
            return value;
    }
};
// method map add, search
class Map{
public:
    int array[SIZE];

    int hashMap(char* str){
        return strlen(str);
    }

    int getMap(char* str){
        return array[hashMap(str)];
    }

    void putMap(char* str, int value){
        array[hashMap(str)] = value;
    }
};

int main() {
    //simple with queue
    TheQueue queue;
    cout<<"The queue simple"<<endl;
    cout<<queue.isEmpty()<<endl;
    queue.putTheQueue(22);
    queue.putTheQueue(10);
    queue.putTheQueue(3);
    queue.putTheQueue(4);
    cout<<"Number - "<<queue.getTheQueue()<<endl;
    cout<<"Number - "<<queue.getTheQueue()<<endl;
    cout<<"Number - "<<queue.getTheQueue()<<endl;
    cout<<queue.isEmpty()<<endl;

    //simple with stack
    cout<<"The stack simple"<<endl;
    Stack st;
  //  cout<<st.stackEmpty()<<endl;
    st.pushToStack(11);
    st.pushToStack(12);
    st.pushToStack(14);
    //simple with map
    cout<<"The map simple"<<endl;
    Map map;
    map.putMap("igor", 35);
    map.putMap("serber", 18);
    map.putMap("hachic", 44);
    cout<<map.getMap("igor")<<endl;
    cout<<map.getMap("serber")<<endl;
    return 0;
}


