#include <iostream>
#include <vector>

uint64_t sum(const std::vector<int> &vec)
{
    uint64_t total = 0;
    for (size_t i = 0, size = vec.size(); i < size; i++)
    {
        total += vec[i];
    }
    return total;
}


int main()
{
    std::vector<int> vec;
    const int MaxNum = 10000;
    vec.reserve(MaxNum);

    for (size_t i = 0; i < MaxNum; i++)
    {
        vec.push_back(2);
    }
    std::cout << "Total: " << sum(vec) << '\n';

    return 0;
}
