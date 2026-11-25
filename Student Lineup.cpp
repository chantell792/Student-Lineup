// Chantell Jenkins
// 11/25/2026
// Student Lineup
#include <iostream>
#include <fstream>

int main()
{
    std::cout << "Student Lineup\n";
    std::ifstream inputFile;
    int studentCount;
    int newlyReadName;
    int currentFirstName;
    int currentLastName;

    inputFile.open("LineUp.txt");
    if (inputFile.fail())
    {
        std::cout << "Error opening file.\n";
        return 1;
    }
    else
    {
        inputFile >> newlyReadName;
    }

    int currentFirstName = newlyReadName;
    int currentLastName = newlyReadName;
    int studentCount = 1;

    while (inputFile >> newlyReadName)
    {
        studentCount = studentCount + 1;
    }
    if (newlyReadName < currentFirstName)
    {
        currentFirstName = newlyReadName;
    }
    else if (newlyReadName > currentLastName)
    {
        currentLastName = newlyReadName;
    }
    std::cout << "Student Count: " << studentCount << std::endl;
    std::cout << "First Name: " << currentFirstName << std::endl;
    std::cout << "Last Name: " << currentLastName << std::endl;
    inputFile.close();
}
    return 0;
}