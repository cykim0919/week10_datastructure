#include "linked_list.h"
#include <iostream>
// TODO: LinkedList 클래스 구현 작성

LinkedList::LinkedList() : head_(nullptr), size_(0) {}

LinkedList::~LinkedList() {
    // 리스트의 모든 노드를 제거하고 메모리를 해제한다.
    while (head_ != nullptr) {
        Node* temp = head_;
        head_ = head_->next_;
        delete temp;
    }
}

void LinkedList::print() {
    Node* current = head_;
    while (current != nullptr) {
        std::cout << current->value_ << " ";
        current = current->next_;
    }
    std::cout << std::endl;
}

void LinkedList::insert(int index, int value) {
    // 삽입할 위치가 리스트 범위를 벗어나면 무시한다.
    if (index < 0 || index > size_) {
        return;
    }

    // 새로운 노드 생성
    Node* newNode = new Node(value);

    // 리스트가 비어있는 경우 또는 맨 앞에 삽입하는 경우
    if (head_ == nullptr || index == 0) {
        newNode->next_ = head_;
        head_ = newNode;
    } else {
        // 삽입할 위치의 이전 노드를 찾음
        Node* prev = head_;
        for (int i = 0; i < index - 1; ++i) {
            prev = prev->next_;
        }

        // 새로운 노드를 연결
        newNode->next_ = prev->next_;
        prev->next_ = newNode;
    }

    size_++;
}

int LinkedList::get(int index) {
    // 인덱스가 유효하지 않으면 -1을 반환
    if (index < 0 || index >= size_) {
        return -1;
    }

    // 인덱스에 해당하는 노드를 찾음
    Node* current = head_;
    for (int i = 0; i < index; ++i) {
        current = current->next_;
    }

    // 해당 노드의 값을 반환
    return current->value_;
}

void LinkedList::remove(int index) {
    // 삭제할 위치가 리스트 범위를 벗어나면 무시한다.
    if (index < 0 || index >= size_) {
        return;
    }

    Node* temp = nullptr;

    // 삭제할 위치가 맨 앞인 경우
    if (index == 0) {
        temp = head_;
        head_ = head_->next_;
    } else {
        // 삭제할 위치의 이전 노드를 찾음
        Node* prev = head_;
        for (int i = 0; i < index - 1; ++i) {
            prev = prev->next_;
        }

        // 삭제할 노드를 찾아 제거
        temp = prev->next_;
        prev->next_ = temp->next_;
    }

    // 메모리 해제 및 리스트 크기 감소
    delete temp;
    size_--;
}
