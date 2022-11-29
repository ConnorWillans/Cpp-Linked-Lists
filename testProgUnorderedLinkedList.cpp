//This program tests various operation of a linked list
//34 62 21 90 66 53 88 24 10 -999 
 
#include <iostream>
#include "unorderedLinkedList.h"

using namespace std; 

int main()
{
    unorderedLinkedList<int> list1, list2;          
    int num;                                        

    cout << "Enter integers ending " 
         << "with -999" << endl;                    
    cin >> num;                                     

    while (num != -999)                             
    {
        list1.insertLast(num);                      
        cin >> num;                                
    }

    cout << endl;                                   

    cout << "list1: ";                      
    list1.print();                                  
    cout << endl;                                   
    cout << "Length of list1: " 
         << list1.length() << endl;                 

    cout<<"Checking if list 2 is empty before copying contents of list 1"<<endl;
    if(list2.isEmptyList())
       cout<<"The list is empty"<<endl;
    else
       cout<<"The list is not empty"<<endl;


    list2 = list1;	   //test the assignment operator 

    cout << endl << "list2: ";                     
    list2.print();                                  
    cout << endl;                                   
    cout << "Length of list2: " 
         << list2.length() << endl;

    cout<<"Checking if list 2 is empty before copying contents of list 1"<<endl;
    if(list2.isEmptyList())
       cout<<"The list is empty"<<endl;
    else
       cout<<"The list is not empty"<<endl;
         

    cout << endl << "Enter the number to be "
         << "deleted: ";                           
    cin >> num;                                     
    cout << endl;                                   

    list2.deleteNode(num);                          
	
    cout << "After deleting " << num 
         << endl << "list2: " ;                     
    list2.print();                                  
    cout << endl;                                

    cout << "Length of list2: " 
         << list2.length() << endl;              

    cout << endl << "Output list1 " 
         << "using an iterator:" << endl;            

    linkedListIterator<int> it;                  

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  
        cout << *it << " ";                        
    cout << endl;                                   

    cout<<"After deleting the smallest node in list1"<<endl;
    list1.deleteSmallest();
    list1.print();
    cout<<endl;


    return 0;					
}



