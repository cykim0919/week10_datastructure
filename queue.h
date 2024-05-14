#ifndef QUEUE_H
#define QUEUE_H

#include "linked_list.h"

// Queue 클래스 정의 
class Queue : public LinkedList {
public:
    void push(int data); // 데이터를 삽입
    int pop(); // 큐의 맨 앞에있는 데이터를 꺼내고 메모리 해제
    int peek(); // 다음에 pop할값을 미리보기
    Queue& operator+=(int q);
};

#endif