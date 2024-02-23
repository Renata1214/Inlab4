#include <iostream>
#include <list>

using namespace std;

template <class T>
class StackList
{
    private:
    list <T> container ;
    public:
    //constructor
    StackList (){};
    //Functions
    /*with the following interface: (empty,size,top,push,pop). All operations must be of
        O(1).*/
    //Empty
    bool empty () const{return container.empty();}
    //Size
    int size (){return container.size();}
    //Top
    T& top () {return container.back(); }
    //Push
    void push (const T &name){container.push_back(name);}
    //Pop
    void pop (){container.pop_back();}
};