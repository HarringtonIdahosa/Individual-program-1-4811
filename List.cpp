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
    std::queue<int> myQueue;
    std::stack<int> myStack;
    std::list<int> myList;

    // Read integers from the file 
    int value;
    while (inputFile >> value) {
        myQueue.push(value);
        myStack.push(value);
        myList.push_back(value);
    }

    // Close the file
    inputFile.close();

    // Sort list in ascending order
    myList.sort();

    // QUEUE CONTENTS
    std::cout << "QUEUE CONTENTS:" << std::endl;
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    // STACK CONTENTS
    std::cout << "STACK CONTENTS:" << std::endl;
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;

    // LIST CONTENTS
    std::cout << "LIST CONTENTS:" << std::endl;
    for (const auto& item : myList) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

