#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

class LinkedList {
public:
  LinkedList(); // 멤버 변수를 초기화한다.
  ~LinkedList(); // 메모리를 적절히 해제한다.
  void print();  // head 부터 순서대로 노드를 출력한다.

protected: // LinkedList를 상속받는 리스트, 스택, 큐 클래스에서 사용가능한 멤버
  void insert(int index, int value); // index 위치에 노드를 삽입한다.
  int get(int index); // index에 위치한 노드의 값을 반환한다.
  void remove(int index); // index에 위치한 노드를 제거하고 메모리 상에서 해제한다.
  Node *head_;
  int size_;
};

#endif