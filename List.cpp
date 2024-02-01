#include <iostream>
#include <fstream>
#include <queue>
#include <stack>
#include <list>


int main() {
    // Ask user for the file name
    std::cout << "Enter file name: ";
    std::string fileName;
    std::cin >> fileName;

    // Open the input file
    std::ifstream inputFile(fileName);

    // Error Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    // Initialize data structures
    std::queue<int> Queue;
    std::stack<int> Stack;
    std::list<int> List;

    // Read integers from the file 
    int value;
    while (inputFile >> value) {
        Queue.push(value);
        Stack.push(value);
        List.push_back(value);
    }

    // Close the file
    inputFile.close();

    // Sort list in ascending order
    List.sort();

    // QUEUE CONTENTS
    std::cout << "QUEUE CONTENTS:" << std::endl;
    while (!Queue.empty()) {
        std::cout << Queue.front() << " ";
        Queue.pop();
    }
    std::cout << std::endl;

    // STACK CONTENTS
    std::cout << "STACK CONTENTS:" << std::endl;
    while (!Stack.empty()) {
        std::cout << Stack.top() << " ";
        Stack.pop();
    }
    std::cout << std::endl;

    // LIST CONTENTS
    std::cout << "LIST CONTENTS:" << std::endl;
    for (const auto& item : List) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}
