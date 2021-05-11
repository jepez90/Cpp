/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched 
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of 
**the element. If the value is not in the array, the user will be notified 
**that the value is not in the array. To exit the program the user will enter -1.
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey, location = -1;
    
    //TODO: write code to determine if integers entered by
    for (int j = 0; j < 10; j++)
    {
        //the user are in searchArray
        std::cin>>searchKey;
        for (int i = 0; i < 10; i++)
        {
            if (searchArray[i] == searchKey)
            {
                location = i;
                break;
            }
        }
        
        //Use these commands to give feedback to the user
        if(location != -1)
        {
            std::cout<<searchKey<<" is at location "<<location<<" in the array.\n";
        }
        else
        {
            std::cout<<searchKey<<" is not in the array.\n";
        }
    }
    return 0;
}
