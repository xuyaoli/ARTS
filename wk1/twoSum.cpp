#include <iostream>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> m;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int comp = target - nums[i];
        if (m.find(comp)!=m.end()){
            result.push_back(m[comp]);
            result.push_back(i);
            break;
        }
        m[nums[i]] = i;
    }
    return result;
}

int main() {
    vector<int> test;
    test.push_back(2);
    test.push_back(7);
    test.push_back(11);
    test.push_back(15);

    vector<int> ll= twoSum(test, 9);
    for (int i = 0; i < ll.size(); i++) {
        std::cout << ll.at(i) << ' ';
    }
    return 0;
}