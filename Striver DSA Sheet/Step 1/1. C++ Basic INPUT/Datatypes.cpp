/*Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
Given a data type, help Geek in finding the size of it in byte.

Data Type - Character, Integer, Long, Float and Double

Example 1:

Input: Character
Output: 1
Explaination: For java it would be 2 bytes.
Example 2:

Input: Integer
Output: 4

Your Task:

Complete the function dataTypeSize() which takes a string as input and returns the size of the data type represented by the given string in byte unit.
Return -1 if the input data type is invalid.

*/

#include<bits/stdc++.h>
using namespace std;

int dataTypeSize(string str) {
        transform(str.begin(), str.end(), str.begin(), ::tolower); 
        int size=-1;
        if(str=="integer")
        {
            size=4;
            return size;
        }
        else if(str=="character")
        {
            size=1;
            return size;
        }
        else if(str=="float")
        {
            size=4;
            return size;
        }
        else if(str=="long")
        {
            size=8;
            return size;
        }
        else if(str=="double")
        {
            size=8;
            return size;
        }
        return size;
        
    }

int main()
{
    return 0;
}
