// std::array의 주요 단점
// - 컴파일 시간에 결정되는 상수여야 한다. 프로그래밍 실행 중 변경할 수 없다.
// - 크기가 고정되어 있어서 원소를 추가하거나 삭제할 수 없다.
// - std::array의 메모리 할당 방법을 변경할 수 없다. 항상 스택 메모리를 사용한다.
// => std::vector 가변 크기 배열
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // ==== 벡터 초기화 ====
    // 크기가 0인 벡터 선언
    std::vector<int> vec1;

    // 지정한 초깃값으로 이루어진 크기가 5인 벡터 선언
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    // 크기가 10인 벡터 선언
    std::vector<int> vec3(10);

    // 크기가 10이고, 모든 원소가 5로 초기화된 벡터 선언
    std::vector<int> vec4(10, 5);

    // ===== 벡터에 원소 집어 넣기 =====
    std::vector<int> vec5 = {1, 2, 3, 4, 5};
    vec5.insert(vec5.begin(), 0); // 벡터 맨 앞에 새로운 원소 삽입
    vec5.push_back(6); // 맨 뒤에 6 추가

    // 확인
    for (int elem: vec5) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 1을 찾아서 그 앞에 4를 삽입
    vec5.insert(find(vec5.begin(), vec5.end(), 1), 4);

    // 확인
    for (int elem: vec5) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // push_back(), insert()는 함수가 추가할 원소(x)를 먼저 임시 생성 후
    // 벡터 버퍼 내부 위치로 복사 또는 이동을 수행한다는 점이다.
    // 이 단점은 새로운 원소가 추가될 위치에서 해당 원소를 생성하는 방식으로 최적화할 수 있다.
    // 이 기능이 emplace_back() 또는 emplace() 함수에 구현되어 있다.
    // push_back() insert() 대신 emplace_back(), emplace() 사용이 성능 향상에 도움 됨

    // ==== 원소 제거 하기 ====
    std::vector<int> vec6 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vec6.pop_back(); // {0, 1, 2, 3, 4, 5, 6, 7, 8}
    vec6.erase(vec6.begin()); // 가장 처음 원소 제거
    vec6.erase(vec6.begin()+1, vec6.begin()+1); // 1번 원소부터 4번째 앞 원소까지 제거 {1,5,6,7,8}

    // vec.clear() : 모든 원소를 완전히 비어 있는 벡터로 만든다.

    // ===== std::vector 할당자 =====
    // std::vector는 템플릿 매개변수에서 데이터 타입 다음에 할당자(allocator)를 전달 할 수 있다.
    // 

    return 0;
}