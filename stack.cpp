#include "stack.h"

// 데이터를 Stack의 맨 위에 삽입
void Stack::push(int data) {
    // LinkedList 클래스의 insert 함수를 사용하여 데이터를 리스트의 맨 앞에 삽입
    insert(0, data);
}

// Stack의 맨 위에 있는 데이터를 꺼내고 메모리를 해제
int Stack::pop() {
    if (size_ == 0) {
        return -1;
    }
    // 리스트의 맨 앞에 있는 데이터를 가져옴
    int data = get(0);

    // 리스트에서 맨 앞에 있는 데이터를 제거
    remove(0);

    return data;
}

// 다음에 pop 될 값을 미리보기
int Stack::peek() {
    if (size_ == 0) {
        return -1;
    }
    // 리스트의 맨 앞에 있는 데이터를 가져오기
    return get(0);
}
// 연산자 추가
Stack& Stack::operator+=(int s) {
    push(s);
    return *this;
}