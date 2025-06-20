#include <iostream>
#include <deque>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::deque<int> people;
    for (int i = 1; i <= n; ++i) {
        people.push_back(i);
    }

    int index = 0;
    while (!people.empty()) {
        index = (index + k - 1) % people.size();
        std::cout << people[index] << " ";
        people.erase(people.begin() + index);
    }

    return 0;
}
