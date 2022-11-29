//Program to test the various operations on an ordered linked list
  
#include <iostream>
#include "orderedLinkedList.h"
 
using namespace std;
 
int main()
{
    orderedLinkedList<int> list1, list2;        
    int num;                                    

    cout << "Enter numbers ending "
         << "with -999." << endl;              
    cin >> num;                                 

    while (num != -999)                         
    {
        list1.insert(num);                      
        cin >> num;                             
    }

    cout << endl;                               

    cout << "list1: ";                  
    list1.print();                             
    cout << endl;                               
    
    cout<<"Checking if list 2 is empty before copying contents of list 1"<<endl;
    if(list2.isEmptyList())
       cout<<"The list is empty"<<endl;
    else
       cout<<"The list is not empty"<<endl;

    list2 = list1; //test the assignment operator 

    cout << "list2: ";                 
    list2.print();                              
    cout << endl;                              

    cout<<"Checking to see if  list2 is empty again"<<endl;
    if(list2.isEmptyList())
       cout<<"The list is empty"<<endl;
    else
       cout<<"The list is not empty"<<endl;

    cout << "Enter the number to be "
         << "deleted: ";                        
    cin >> num;                               
    cout << endl;                               

    list2.deleteNode(num);                     

    cout << "After deleting "
         << num << endl << "list2: " ;         
    list2.print();                              
    cout<<endl;

    cout<<"After deleting the smallest node in list1, here it is"<<endl;
    list1.deleteSmallest();
    list1.print();                                 
    cout<<endl;

    return 0;					
}



