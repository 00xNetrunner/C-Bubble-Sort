/*
* Leif R Bruce \\ 2202336 \\ 2202336@uad.ac.uk 
* 31st of Oct 2022 \\ 5PM
* This programing will be able to sort numbers the user enters into the program, this program will then sort out the numbers-
* using the bubble sort method, in this instance it will be sorting the numbers in ascending order.
*/

#include<iostream>
using namespace std;
int main()
{
    int x, y, arry[60], z, interim;
    cout << "Please enter how many numbers you would like to sort:\n>> ";
    cin >> x;
    cout << "Please enter " << x << "numbers\n";
    for(y=0; y<x; y++)
        cin >> arry[y];
    cout << "Give bubble sort a minute to do its thing.....";
    for (y = 0; y < (x - 1); y++)
    {
        for (z = 0; z < (x - y - 1); z++)
        {
            if (arry[z] > arry[z + 1])
            {
                interim = arry[z];
                arry[z] = arry[z + 1];
                arry[z + 1] = interim;


            }
        }
    }

    cout << "\nBubble sorted as went through the array in accending order\n Arry:";
    for (y = 0; y < x; y++)
        cout << arry[y] << " ";
    cout << endl;
    return 0;
}
