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
class Stck {
public:
    int top;
    int stck[SIZE];

    Stck (){
        top = 0;
    }

    bool stckEmpty(){
        return bool (top <= NULL);
    }

    bool stckFull(){
       return bool (top >= SIZE);
    }

    void pushToStck(int value) {
        if ( stckFull() ){
            cout<<"The stack is full "<<endl;
            return;
        }
        *(stck + top) = value;
        top++;
    }

    int popStck(){
        if ( stckEmpty() ) {
            cout<<"The stack is empty "<<endl;
            return false;
        }
        top--;
        int value =  *(stck+top);
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
    Stck st;
    cout<<st.stckEmpty()<<endl;
    st.pushToStck(11);
    st.pushToStck(12);
    st.pushToStck(14);
    cout<<st.popStck()<<endl;
    cout<<st.popStck()<<endl;
    cout<<st.popStck()<<endl;

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


