//This program was made with the assistance of AI

#include <iostream>
#include <vector>

void printMenu() {
    std::cout << "What do you want to do?\n";
    std::cout << "1. Add an item to the vector\n";
    std::cout << "2. Print the vector\n";
    std::cout << "3. Double the vector\n";
    std::cout << "4. Find the sum\n";
    std::cout << "5. Print multiples of a user-defined value\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice (1-6): ";
}



void printVector(const std::vector<int>& vector) {
    if (vector.empty()) {
        std::cout << "Empty\n";
    }
    else {
        std::cout << "Vector contents: ";
        for (size_t i = 0; i < vector.size(); ++i) {
            std::cout << vector.at(i) << " ";
        }
        std::cout << "\n";
    }
}

void doubleVector(std::vector<int>& vector) {
    for (size_t i = 0; i < vector.size(); ++i) {
        vector.at(i) *= 2;
    }
    std::cout << "All elements doubled\n";
}

int calculateSum(const std::vector<int>& vector) {
    int sum = 0;
    for (size_t i = 0; i < vector.size(); ++i) {
        sum += vector.at(i);
    }
    return sum;
}

void printMultiples(const std::vector<int>& vector, int multiple) {
    std::cout << "Multiples of " << multiple << ": \n";
    for (size_t i = 0; i < vector.size(); ++i) {
        if (vector.at(i) % multiple == 0) {
            std::cout << vector.at(i) << "\n";
        }
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> numbers;
    int choice = 0;

    while (choice != 6) {
        printMenu();
        std::cin >> choice;

        if (choice == 1) {
            int add;
            std::cout << "Enter a number to add: ";
            std::cin >> add;
            numbers.push_back(add);
            std::cout << "Added " << add << " to the vector\n";
        }
        else if (choice == 2) {
            printVector(numbers);
        }
        else if (choice == 3) {
            doubleVector(numbers);
        }
        else if (choice == 4) {
            int sum = calculateSum(numbers);
            std::cout << "Sum of all elements = " << sum << "\n";

        }
        else if (choice == 5) {
            int multiple;
            std::cout << "Enter a number to find multiples: ";
            std::cin >> multiple;
            printMultiples(numbers, multiple);
        }

    }

   
    return 0;
}

