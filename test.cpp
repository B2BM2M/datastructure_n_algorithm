#include <iostream>
#include <string>

int main() {
    // Create our string
    std::string my_str("Hello from JournalDev");
    // Target string to search for
    std::string target_string("JournalDev");

    std::cout << "Is " << target_string << " a substring of " << my_str << " ?\n";
    size_t substring_length = my_str.find(target_string);
    if (substring_length == 0)
        std::cout << "No\n";
    else
        std::cout << "Length of matched substring = " << substring_length << std::endl;

    return 0;
}