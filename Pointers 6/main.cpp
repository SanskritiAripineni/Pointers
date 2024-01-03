/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //Task 1
    int num = 20;
    int *pNum;
    pNum = &num;
    
    cout << "********* TASK 1 *********" << endl;    
    cout << "This is num in C++: " << num << endl;
    cout << "This is pNum in C++: " << pNum << endl;
    cout << endl;
    printf("This is num in C:  %d\n", num);
    printf("This is pNum in C: %p\n", pNum);
    printf("\n");
    
   //Task 2
   cout << "********* TASK 2 *********" << endl;
   printf("This is the address of num in C: %p\n", &num);
   printf("This is the value of num in C: %d\n",num);
   printf("This is the value of pNum in C: %p\n",pNum);
   printf("\n");
   cout << "This is the address of num in C++: " << &num << endl;
   cout << "This is the value of num in C++: " << num << endl;
   cout << "This is the value of pNum in C++: " << pNum << endl;
   cout << endl;
   
   //Task 3
   *pNum = 30;
   cout << "********* TASK 3 *********" << endl;
   printf("This is the value of pNum in C: %d\n",*pNum);
   cout << "This is the value of pNum in C++: " << *pNum << endl;
   cout << endl;
   
   //Task 4
   int *anotherPtr;
   anotherPtr = pNum;
   cout << "********* TASK 4 *********" << endl;
   printf("This is the value of anotherPtr in C: %d\n", *anotherPtr);
   cout << "This is the value of anotherPtr in C++: " << *anotherPtr << endl;
   printf("\n");
   
   //task 5 in C - extra credit
   int arr[5] = {10, 20, 30, 40, 50};
   int *pArr = arr;
   printf("********* TASK 5 in C - extra credit *********\n");
   printf("In C\n");
   for(int i = 0; i < 5; i++)
   {
       printf("Value at arr[%d] = %d\n", i, *pArr);
       pArr++; // Move the pointer to the next element
   }
   
   cout << endl;
   //task 5 in C++ - extra credit
    int arrr[5] = {10, 20, 30, 40, 50};
    int *pArrr = arrr; // Initialize the pointer to point to the first element of arr
    cout << "********* TASK 5 in C++ - extra credit *********" << endl;
    cout << "In C++" << endl;
    // Using a loop and pointer arithmetic to print out each value in the arr array
    for (int i = 0; i < 5; i++) 
    {
        cout << "Value at arr[" << i << "] = " << *pArrr << endl;
        pArrr++; // Increment the pointer to point to the next element
    }
   
    return 0;
}
