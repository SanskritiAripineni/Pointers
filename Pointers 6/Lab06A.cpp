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
    
    /*
    Declare an integer variable named num and assign it the value 20.
    Declare a pointer to an integer named pNum.
    Initialize pNum to point to num.
    */
    int num = 20;
    int *pNum;
    pNum = &num;
    
    /*
    The value of num to ensure it has been initialized correctly.
    The address stored in pNum to ensure it's correctly initialized to point to num
    */
    
    cout << "********* TASK 1 *********" << endl;    
    cout << "This is num in C++: " << num << endl;
    cout << "This is pNum in C++: " << pNum << endl;
    cout << endl;
    printf("This is num in C:  %d\n", num);
    printf("This is pNum in C: %p\n", pNum);
    printf("\n");
    
    
   //Task 2
   
   cout << "********* TASK 2 *********" << endl;
   /*
   Using the printf function, display the address of the num variable.
    Again, using the printf function, display or print the value stored in pNum (which should be the
    address of num).
    Display the value of the variable num using only the pointer pNum.
   */
   
   printf("This is the address of num in C: %p\n", &num);
   printf("This is the value of num in C: %d\n",num);
   printf("This is the value of pNum in C: %p\n",pNum);
   printf("\n");
   cout << "This is the address of num in C++: " << &num << endl;
   cout << "This is the value of num in C++: " << num << endl;
   cout << "This is the value of pNum in C++: " << pNum << endl;
   cout << endl;
   
   
   //Task 3
   
   //Change the value of num to 30 using the pointer pNum.
   *pNum = 30;
   
   cout << "********* TASK 3 *********" << endl;
   
   /*
   Print the value of num to ensure the change was effective.
    Print the value pointed by pNum to ensure it matches the new value of num.
   */
   
   printf("This is the value of pNum in C: %d\n",*pNum);
   cout << "This is the value of pNum in C++: " << *pNum << endl;
   cout << endl;
   
   
   //Task 4
   
   //Declare another pointer to an integer named anotherPtr.
   //Assign the address stored in pNum to anotherPtr
   
   int *anotherPtr;
   anotherPtr = pNum;
   cout << "********* TASK 4 *********" << endl;
   //Print the value pointed to by anotherPtr to ensure it matches that of pNum.
   printf("This is the value of anotherPtr in C: %d\n", *anotherPtr);
   cout << "This is the value of anotherPtr in C++: " << *anotherPtr << endl;
   printf("\n");
   
   //task 5 in C - extra credit
   
   //Declare an integer array named arr of size 5 and initialize it with values 10, 20, 30, 40, and 50.
   int arr[5] = {10, 20, 30, 40, 50};
   //Declare a pointer named pArr and initialize it to point to the first element of arr.
   int *pArr = arr;
   printf("********* TASK 5 in C - extra credit *********\n");
   printf("In C\n");
   for(int i = 0; i < 5; i++) //Using a loop and pointer arithmetic, print out each value in the arr array using the pArr pointer.
   {
       printf("Value at arr[%d] = %d\n", i, *pArr);
       pArr++; // Move the pointer to the next element
   }
   
   cout << endl;
   //task 5 in C++ - extra credit
   
   //Declare an integer array named arr of size 5 and initialize it with values 10, 20, 30, 40, and 50.
    int arrr[5] = {10, 20, 30, 40, 50};
    //Declare a pointer named pArr and initialize it to point to the first element of arr.
    int *pArrr = arrr; 
    cout << "********* TASK 5 in C++ - extra credit *********" << endl;
    cout << "In C++" << endl;
    // Using a loop and pointer arithmetic to print out each value in the arr array
    for (int i = 0; i < 5; i++) //Using a loop and pointer arithmetic, print out each value in the arr array using the pArr pointer.
    {
        cout << "Value at arr[" << i << "] = " << *pArrr << endl;
        pArrr++; // Increment the pointer to point to the next element
    }
   
    return 0;
}
