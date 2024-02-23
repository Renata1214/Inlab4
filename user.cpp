#include <iostream>
#include "stackvector.h"
#include "stacklist.h"
#include "queuevector.h"
#include "queuelist.h"
#include "payload.h"

using std::cout;

template <class C> void testStack(C && s)
{
 cout<< (s.empty()?"is":"not") << " empty; ";
 s.push("apple");
 s.push("pear");
 s.pop();
 cout << "size=" << s.size() << " top=" << s.top().name << '\n';
}
template <class C> void testQueue(C && s)
{
 cout<< (s.empty()?"is":"not") << " empty; ";
 s.push("apple");
 s.push("pear");
 s.pop();
 cout << "size=" << s.size() << " front=" << s.front().name << "back=" << s.back().name << '\n';
}
int main()
{
 testStack(StackList<Payload>());
 testStack(StackVector<Payload>());
 testQueue(QueueList<Payload>());
 QueueVector<Payload> qv;
 qv.push("banana");
 testQueue(qv);
 //cout<< "Working" << '\n';
 cout<<qv[0].name<<'\n';
}