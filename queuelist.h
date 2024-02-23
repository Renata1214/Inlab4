#include <iostream>
#include <list>

using namespace std;

template <class T>
class QueueList
{
    private:
    list <T> container ;
    public:
    //constructor
    QueueList (){};
    //Functions
    /*with the following interface: ((empty,size,push,pop,front,back). All operations must be of
        O(1).*/
    //Empty
    bool empty () const{return container.empty();}
    //Size
    int size ()const{return container.size();}
    //FRONT
    T& front () {return container.front(); }
    //BACK
    T& back () {return container.back(); }
    //Push
    void push (const T &name){container.push_back(name);}
    //Pop
    void pop (){container.pop_front();}
    //bool empty () const{return container.size()==0;}
};