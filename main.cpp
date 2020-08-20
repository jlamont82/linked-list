// advanced programming ass 2 q1 ver 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdio>
#include<cstdlib>
#include"linklist.h"
#include"linklistFunctions.h"
using namespace std;


int DisplayMainMenu()							// main menu
{
    int value;
    cout << "\nPlease select one of the following options: \n\n";
    cout << "1. Insert a new number into the linked list\n";
    cout << "2. Sort Linked List into  nemeric order\n";
    cout << "3. Delete a value from the linked list\n";
    cout << "4. Print list from left to right\n";
    cout << "5. Print list from right to left\n";
    cout << "0. Exit Program\n";
    cin >> value;

    return value;
}
int main()
{

    int mainSelection;
    init();

    do
    {
        mainSelection = DisplayMainMenu();

        switch (mainSelection)
        {
        case 1:
        {
            int element;

            cout << "Enter element_";

            cin >> element;

            insertFirst(element);

            printList();
            break;
        }
        case 2:
        {


            printList();
            break;
        }
        case 3:
        {
            int element;

            cin >> element;

            deleteItem(element);

            printList();

            break;
        }
        case 4:
        {
            printList();
            break;
        }
        case 5:
        {
            printReverse();
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            cout << "Invalid entry! \a\n";
            break;
        }
        }
    } while (mainSelection != 0);

    return 0;

}