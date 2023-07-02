#include <iostream>

struct Student 
{
    std::string lastName;
    int group;
    float averageScore;
};

void bubbleSort(Student arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[j].group < arr[i].group) 
            {
                Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    const int SIZE = 5;
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++) 
    {
        std::cout << "Enter the last name of student " << i + 1 << ": ";
        std::cin >> students[i].lastName;
        std::cout << "Enter the group number of student " << i + 1 << ": ";
        std::cin >> students[i].group;
        std::cout << "Enter the average score of student " << i + 1 << ": ";
        std::cin >> students[i].averageScore;
    }

    bubbleSort(students, SIZE);

    bool found = false;
    std::cout << "Students with an average score greater than 4.0:\n";
    for (int i = 0; i < SIZE; i++) 
    {
        if (students[i].averageScore > 4.0) 
        {
            std::cout << "Last Name: " << students[i].lastName << ", Group: " << students[i].group << "\n";
            found = true;
        }
    }

    if (!found) 
    {
        std::cout << "No students with an average score greater than 4.0.\n";
    }

    return 0;
}