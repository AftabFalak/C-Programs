/*
A zero-indexed array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.
Your goal is to find that missing element.
Write a function:
    int solution(vector<int> &A);
that, given a zero-indexed array A, returns the value of the missing element.
For example, given array A such that:
  A[0] = 2
  A[1] = 3
  A[2] = 1
  A[3] = 5
the function should return 4, as it is the missing element.
Assume that:
        N is an integer within the range [0..100,000];
        the elements of A are all distinct;
        each element of array A is an integer within the range [1..(N + 1)].
Complexity:
        expected worst-case time complexity is O(N);
        expected worst-case space complexity is O(1), beyond input storage (not counting the storage required for input arguments).
Elements of input arrays can be modified.
Copyright 2009–2016 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.
*/
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    unsigned int n = A.size()+1;
    int x = 0;

    if(n!=1){
      for(unsigned int i=1;i<=n;i++){
          x = x ^ i ^ A[i-1];
        }
      } else  x=1;

    return x;
}

int main(){

    vector<int> A = {1,2,3,5,6,7,8};

    std::cout << "Missing number is "<< solution(A) << std::endl;

  return 0;
}
