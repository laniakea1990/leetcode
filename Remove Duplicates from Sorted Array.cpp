/*
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array A = [1,1,2],

Your function should return length = 2, and A is now [1,2].
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(int A[], int n)
    {
        if(n == 0)
            return 0;
        int index = 0;
        for(int i = 1; i< n; ++i)
        {
            if(A[index] != A[i])
                A[++index] = A[i];
        }
        return index+1;
    }
};

int main()
{
    Solution jrr;
    int A[14] = {1,1,1,1,2,2,2,3,3,4,4,5,5,6};
    int new_length = jrr.removeDuplicates(A, 14);
    cout << new_length << endl;
    return 0;


}
