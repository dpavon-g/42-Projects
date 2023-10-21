#include "MutantStack.hpp"

int myMain()
{
    std::cout << "\n--- Creating the MutantStack ---\n" << std::endl;
    MutantStack<int> mstack;
    int num;

    num = 5;
    std::cout << "Adding number: " << num << std::endl;
    mstack.push(num);

    num = 17;
    std::cout << "Adding number: " << num << std::endl;
    mstack.push(num);

    std::cout << "Number at the top: " << mstack.top() << std::endl;

    std::cout << "\n--- Removing the top ---\n"
              << std::endl;
    mstack.pop();

    std::cout << "Total numbers: " << mstack.size() << std::endl;

    num = 3;
    std::cout << "Adding number: " << num << std::endl;
    mstack.push(num);

    num = 5;
    std::cout << "Adding number: " << num << std::endl;
    mstack.push(num);

    num = 737;
    std::cout << "Adding number: " << num << std::endl;
    mstack.push(num);

    num = 0;
    std::cout << "Adding number: " << num << std::endl;
    mstack.push(num);

    std::cout << "Total numbers: " << mstack.size() << std::endl;
    std::cout << "Number at the top: " << mstack.top() << std::endl;
    std::cout << "Pointer to the newest number: " << *mstack.end() << std::endl;
    std::cout << "Pointer to the oldest number: " << *mstack.begin() << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    std::cout << "--- Iterating the MutantStack forward ---" << std::endl;
    std::cout << "Now the iterator points to the number: " << *it << std::endl;
    --it;
    std::cout << "--- Iterating the MutantStack backward ---" << std::endl;
    std::cout << "Now the iterator points to the number: " << *it << std::endl;

    std::cout << "\n--- Iterating the MutantStack with a while loop ---" << std::endl;
    while (it != ite)
    {
        std::cout << "Number in the stack: " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

int exMain()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

int myMainWithList()
{
    std::cout << "\n--- Creating the list ---\n" << std::endl;
    std::list<int> myList;
    int num;

    num = 5;
    std::cout << "Adding number: " << num << std::endl;
    myList.push_back(num);

    num = 17;
    std::cout << "Adding number: " << num << std::endl;
    myList.push_back(num);

    std::cout << "Number at the end: " << myList.back() << std::endl;

    std::cout << "\n--- Removing the last element ---\n"
              << std::endl;
    myList.pop_back();

    std::cout << "Total numbers: " << myList.size() << std::endl;

    num = 3;
    std::cout << "Adding number: " << num << std::endl;
    myList.push_back(num);

    num = 5;
    std::cout << "Adding number: " << num << std::endl;
    myList.push_back(num);

    num = 737;
    std::cout << "Adding number: " << num << std::endl;
    myList.push_back(num);

    num = 0;
    std::cout << "Adding number: " << num << std::endl;
    myList.push_back(num);

    std::cout << "Total numbers: " << myList.size() << std::endl;
    std::cout << "Number at the end: " << myList.back() << std::endl;

    std::list<int>::iterator it = myList.begin();
    std::list<int>::iterator ite = myList.end();

    ++it;
    std::cout << "--- Iterating the list forward ---" << std::endl;
    std::cout << "Now the iterator points to the number: " << *it << std::endl;
    --it;
    std::cout << "--- Iterating the list backward ---" << std::endl;
    std::cout << "Now the iterator points to the number: " << *it << std::endl;

    std::cout << "\n--- Iterating the list with a while loop ---" << std::endl;
    while (it != ite)
    {
        std::cout << "Number in the list: " << *it << std::endl;
        ++it;
    }
    return 0;
}

int main()
{
    std::cout << "--- My main ---" << std::endl;
    myMain();
    std::cout << "\n\n--- Ex main ---\n" << std::endl;
    exMain();
    std::cout << "\n\n--- My main with list ---\n" << std::endl;
    myMainWithList();
    return (0);
}