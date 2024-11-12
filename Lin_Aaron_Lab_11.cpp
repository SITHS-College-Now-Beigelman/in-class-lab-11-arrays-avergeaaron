// Aaron Lin
// 11/12/2024
// Lab 11

//Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//Beginning of code
int main()
{
    const int ARRAY_SIZE = 50; //permanently sets the array index to 50
   	double alpha[ARRAY_SIZE]; //array variable called alpha
    int total; //variable for the total of the generated numbers
    double avg; //variable for the average of all the generated number
    int counter; //variable for the amount of 100's generated

    for (int i = 0; i < 50; i++) //runs the code 50 times
    {
        if (i < 25) //if i < 25
        {
            alpha[i] = pow(i,2); //the number in the index of the array is square
            cout << alpha[i] << " "; //prints the number in the index out
        }
        else //else
        {
            alpha[i] = (i * 3); //the number in the index of the array is time 3
            cout << alpha[i] << " "; //prints the number in the index out
        }
        
        if(i % 10 == 0 && i != 0) //if the i is divided by 10 and leave no remainder and i is also not eqaul to 0
            cout << "\n"; //prints a new line
    }

    cout << "\n" << endl; //separating the 2 part of the assignmnet for organization

    for (int i = 0; i < 50; i++) //runs the code 50 times
    {
        alpha[i] = rand() % 100 + 1; //a randomly generated number from 1 - 100 is place in each index
        total += alpha[i]; //adds the randomly generated number to total
        cout << alpha[i] << " "; //prints the number in the index out

        if(alpha[i] == 100) //if a number in the index of the array is equal to 100
            counter += 1; //adds 1 to counter
    }

    avg = total/100; //the average of all the randomly generated number
    cout << "\nThe average of the randomly generated number is " << avg; //prints the average of all the randomly generated number
    cout << "\nThere is a total of " << counter << " of 100's in this array"; //prints the total amount of 100's in the array

    return 0; //ends the code
}

/*
0 1 4 9 16 25 36 49 64 81 100 
121 144 169 196 225 256 289 324 361 400 
441 484 529 576 75 78 81 84 87 90 
93 96 99 102 105 108 111 114 117 120 
123 126 129 132 135 138 141 144 147 

8 50 74 59 31 73 45 79 24 10 41 66 93 43 88 4 28 30 41 13 4 70 10 58 61 34 100 79 17 36 98 27 13 68 11 34 80 50 80 22 68 73 94 37 86 46 29 92 95 58 
The average of the randomly generated number is 25
There is a total of 1 of 100's in this array 
*/