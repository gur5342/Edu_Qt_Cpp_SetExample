#include <iostream>
#include <set>

using namespace std;

template  <typename T>
void print_set(set<T>& s)
{
    for (const auto & elem : s) {
        cout << elem << endl;
    }
}
//출력하기 위한 함수

int main()
{
    set<int> int_set;
    int_set.insert(10);
    int_set.insert(20);
    int_set.insert(1);
    int_set.insert(2);
    int_set.insert(2); // 중복 허용x
    print_set(int_set); // 자동으로 작은 것부터 순서대로 출력

    auto itr = int_set.find(20);
    if(itr != int_set.end()){
        cout <<  "find 20" << endl;
    }
    else {
        cout << "can not  find 20" << endl;
    }
    cout << "find key : "<< *itr << endl;
    return 0;
}
