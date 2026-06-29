#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <string>

int main() {

    // dynamischer Array - VECTOR
    std::vector<int> vec = {1,2,3,4};
    vec.push_back(6);
    vec.pop_back();
    vec.insert(vec.begin() + 2,7);
    vec.erase(vec.begin() + 3);
    std::cout << "Vector: ";
    for (int num : vec) std::cout << num << " ";
    std::cout << "\n";


    // double ended - deque
    std::deque<int> deque = {2,3,4};
    deque.push_front(1);
    deque.push_back(5);
    std::cout << "Deque: ";
    for (int num : deque) std::cout << num << " ";
    std::cout << "\n";

    // double linked list - LIST
    std::list<int> lst = {1,2,3,4,5};
    lst.push_front(0);
    lst.push_back(6);
    lst.insert(++lst.begin(), 60);
    std::cout << "List: ";
    for (int num : lst) std::cout << num << " ";
    std::cout << "\n";

    // MAP
    std::map<std::string, int> mp;
    mp["one"] = 1;
    mp["two"] = 2;
    std::cout << "Map: ";
    for (auto& pair : mp) std::cout << pair.first << ":" << pair.second << " ";
    std::cout << "\n";

    return 0;
};