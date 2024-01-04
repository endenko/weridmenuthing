#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string z = "Welcome Hue University of Sciences";
    std::vector<std::string> text;
    std::string word;

    while (std::cin >> word) {
        text.push_back(word);
    }

    std::vector<std::string> z_words;
    size_t found_count = 0;
    size_t current_word_index = 0;

    for (size_t start = 0; start < z.size(); start++) {
        size_t space_pos = z.find(' ', start);
        if (space_pos == std::string::npos) {
            z_words.push_back(z.substr(start));
            break;
        }
        z_words.push_back(z.substr(start, space_pos - start));
        start = space_pos;
    }

    for (size_t i = 0; i < text.size(); i++) {
        if (text[i] == z_words[current_word_index]) {
            current_word_index++;
            found_count++;
            if (found_count == z_words.size()) {
                std::cout << "Yes" << std::endl;
                return 0;
            }
        }
    }

    std::cout << (found_count == z_words.size() ? "Yes" : "No") << std::endl;
    return 0;
}

