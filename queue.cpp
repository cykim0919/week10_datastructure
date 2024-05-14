#include "queue.h"

// TODO: Queue 클래스 구현 작성
void Queue::push(int data){
    // 리스트의 맨 끝에 데이터 추가
    insert(size_, data);
}

// 큐의 맨 앞에있는 데이터를 꺼내고 메모리 해제
int Queue::pop(){
    if(size_ == 0){
        return -1;
    }
    int data = get(0);
    remove(0);

    return data;
}

// 다음에 pop할값을 미리보기
int Queue::peek(){
    if(size_ == 0){
        return -1;
    }
    return get(0);
}
// 연산자 추가
Queue& Queue::operator+=(int q) {
    push(q);
    return *this;
}