// 라이선스

#ifndef SET_H
#define SET_H

// Set의 경우 Abstract Class로 정의 (pure virtual function 이용)
class Set
{
public:
    virtual ~Set() = 0;

    // Basic 기능
    // key를 root로 하는 subtree에서 최솟값을 갖는 node의 값과 depth를 출력
    virtual void Minimum(const int key) = 0;

    // key를 root로 하는 subtree에서 최댓값을 갖는 node의 값과 depth를 출력
    virtual void Maximum(const int key) = 0;

    // Set이 비어있으면 1, 그렇지 않으면 0을 return
    virtual bool IsEmpty() const = 0;

    // Set에 들어있는 원소의 개수 return
    virtual int GetSize() const = 0;

    // 해당 key를 가지고 있는 node의 depth를 return
    virtual int Find(const int key) = 0;

    // num을 삽입하고 해당 node의 depth를 출력
    virtual void Insert(const int num) = 0;

    // Advanced 기능
    // 해당 key를 가지고 있는 node의 depth와 rank를 출력
    // rank: Set에서 해당 node보다 작은 key 값을 가진 node의 개수 + 1
    // virtual void GetRank(const int num) = 0;

    // 해당 key를 가지고 있는 node의 depth를 출력하고 해당 노드를 삭제
    // virtual void Erase(const int num) = 0;
};

#endif