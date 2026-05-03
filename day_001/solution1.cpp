#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution{
public:
    int getSecondLargest(vector<int> &arr){
        int n = arr.size();
    
        int largest = INT_MIN; int SecondLargest = INT_MIN;
    
        for (int i = 0; i< n; i++){
                if (arr[i]> largest){
                    SecondLargest = largest;
                    largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > SecondLargest){
                    SecondLargest = arr[i];
            }
        }
        return (SecondLargest == INT_MIN) ? -1 : SecondLargest;
    }
    
};
