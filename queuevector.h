// Task 3: Implement QueueVector<T> which:
// 1) does not resize if calls to push/pop are balanced, i.e. when size<capacity, no
// reallocation should be done;
// 2) does not move its elements, i.e. push/pop are always O(1).

#include <iostream>
#include <vector>


using namespace std;


template <class T>
class QueueVector{

    private:
    int front1;
    int back1;
    int size1;
    int capacity;
    T * array;

    public:

    //Constructor
    QueueVector (): front1(0),back1(0),size1(0),capacity(4){
        array=new T [capacity];};

    ~QueueVector(){delete []array;}

    /*with the following interface: (empty,size,,push,pop). All operations must be of
        O(1).*/

    //Empty
    bool empty () const{return size1==0;}
    //Size

    //Push_back: Conditions to resize: Capacity is full, back front is equal to the capacity, 
    void push (const T &name){
        if(size1==capacity){ //ask whether it would be better to use the mod thing here 
            capacity=capacity*2;
             T * temp = new T[capacity];
             for(int i=0;i<size1;i++)
             {
                temp[i]=array[front1];
                front1 ++;
                front1=front1 % capacity;
             }
            delete [] array;
            //Take care of back and front as well 
            array=temp;
            front1=0;
            back1=size1;
        }

        //Push the element
        array[back1] = name;
        //Increment back
            back1 ++;
            back1=back1 % capacity;
        //Increment size
            size1 ++;
         
    }

    //Pop_front
    void pop (){
    if (size1==0){
        cout << "Nothing to pop" << endl;
    }
    else{
        //array[front1] = nullptr;
        front1 ++;
        front1=front1 % capacity;
        --size1;
    }
    }

    T& front () {
        return array[front1];
    }

    T& back () { //Returns the last element
        return array[back1-1];
    }
    
    int size () {
        return size1;
    }

    T& operator [] (int value){
        return array [(front1+value)%capacity];
    }

}; 
