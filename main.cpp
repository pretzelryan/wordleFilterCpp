#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For sorting

int main() {
    // 1. Create a "list" of strings (std::vector)
    std::vector<std::string> words = {"apple", "crane", "slate", "zesty"};

    // 2. Add a word dynamically
    words.push_back("brick");

    // 3. Sort them alphabetically
    std::sort(words.begin(), words.end());

    // 4. Loop and print
    std::cout << "Target Dictionary Size: " << words.size() << "\n";
    for (const auto& word : words) {
        std::cout << "- " << word << "\n";
    }

    return 0; // Success
}