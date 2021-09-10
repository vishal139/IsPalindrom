/*Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

RETURN  0 / 1 ( 0 for false, 1 for true ) for this problem


I am using two pointers concept to solve this problem 
*/
#include<iostream>
using namespace std;

int Ispalindrom(string A)   // function to check if given string is a palindrom
{
    int i=0;
    int j=A.size()-1;
    while(i<=j)
    {
        // first convert the characters to upper case and check if they are alphanumeric
        char left = toupper(A[i]);
        char right = toupper(A[j]);
        if((isalnum(left) && (isalnum(right))))  // if both are alphanumeric compare them if same increment i and decrement j
        {
            if(left == right)
            {
                i++;
                j--;
            }
            else
            {
                return 0;     // if both are alphanumeric but not equal return 0 they are not palindrom
            }
        }
        else if(!isalnum(left)) // if not alphanumeric go ahead for next value
        {
            i++;
        } 
        else if(!isalnum(right) )  // if not alphanumeric go ahead for next value
        {
            j--;
        } 
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}
int main()
{

    string A = "A man, a plan, a canal: Panama";
    cout<<Ispalindrom(A);

    return 0;
}