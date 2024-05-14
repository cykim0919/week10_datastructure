#ifndef LIST_H
#define LIST_H

#include "linked_list.h"

// List 클래스 정의
class List : public LinkedList {
public:
    // LinkedList 클래스의 생성자를 상속
    using LinkedList::LinkedList;
    void insert(int index, int value) { LinkedList::insert(index, value); }
};

#endif
