#ifndef STACK_H
#define STACK_H

#include "linked_list.h"
// Stack 클래스 정의
class Stack : public LinkedList {
    public:
        void push(int data); // 데이터를 삽입
        int pop(); // 데이터를 꺼내고 메모리 해제
        int peek(); // 다음 pop될값 미리보기 
        Stack& operator+=(int s);
};
#endif