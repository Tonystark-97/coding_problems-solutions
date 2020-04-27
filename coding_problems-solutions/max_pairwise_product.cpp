#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    int n = numbers.size();

    return ((long long)numbers[n-1])*numbers[n-2];
     
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    sort(numbers.begin(),numbers.end());
    long long result =MaxPairwiseProduct(numbers);
    std::cout << result<< "\n";
    return 0;
}
