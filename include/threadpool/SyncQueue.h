/**
* @Author : wanghognfu
* @Date : 18-12-9$ 
* @Descri : 
*/

#ifndef CPLUSDEMO_SYNCQUEUE_H
#define CPLUSDEMO_SYNCQUEUE_H

#include <thread>
#include <mutex>
#include <condition_variable>
#include "common_src.h"

template <typename T>
class SyncQueue
{
public:
    SyncQueue(int maxSize):m_maxSize(maxSize), m_needStop(false)
    {
    }

    void Put(const T&x);
    void Put(const T&&x);
    void Task(std::list<T>& list);
    void Task(T& t);
    void Stop();
    bool Empty();
    bool Full();
    size_t Size();


private:
    bool NotFull() const
    {
        bool full=m_queue.size()  >= m_maxSize;
        if(full)
            cout<<"buffer is full  need waitings."<<endl;
        return  !full;
    }

    int m_maxSize;
    bool m_needStop;
    list<T> m_queue;
    std::mutex m_mutex;
    std::condition_variable m_notEmpty;
    std::condition_variable m_notFull;
};


#endif //CPLUSDEMO_SYNCQUEUE_H
