#pragma once
#include "linklist.h"

using namespace std;


void init()             // inituate linked list

{

    head = NULL;

    tail = NULL;

}

void insertFirst(int element) // insert value in hesd of list

{

    class node* newItem;

    newItem = new node;

    if (head == NULL)

    {

        head = newItem;

        newItem->prev = NULL;

        newItem->value = element;

        newItem->next = NULL;

        tail = newItem;

    }

    else

    {

        newItem->next = head;

        newItem->value = element;

        newItem->prev = NULL;

        head->prev = newItem;

        head = newItem;

    }

}

void deleteItem(int element)                // delete a requested value from list

{

    struct node* temp;

    temp = head;

    if (head == tail)

    {

        if (head->value != element)

        {

            cout << "could not delete" << endl;

            return;

        }

        head = NULL;

        tail = NULL;

        delete temp;

        return;

    }

    if (head->value == element)

    {

        head = head->next;

        head->prev = NULL;

        delete temp;

        return;

    }

    else if (tail->value == element)

    {

        temp = tail;

        tail = tail->prev;

        tail->next = NULL;

        delete temp;

        return;

    }

    while (temp->value != element)

    {

        temp = temp->next;

        if (temp == NULL)

        {

            cout << "element not found" << endl;

            return;

        }

    }

    temp->next->prev = temp->prev;

    temp->prev->next = temp->next;

    delete temp;

}

void printList()                    // print list in normal order

{

    struct node* temp;

    temp = head;

    while (temp != NULL)

    {
       
        printf("%d->", temp->value);

        temp = temp->next;

    }

    puts("");

}



void printReverse()                 // print list in reverse

{

    struct node* temp;

    temp = tail;

    while (temp != NULL)

    {

        cout << temp->value << "->";

        temp = temp->prev;

    }

    cout << endl;

}

// sorting linked list
