#include <iostream>
#include <vector>

using namespace std;

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "The number of elements in the array is:- \n";
    cin >> n;

   
    vector<int> nums(n);

    cout << "The entries of our array are:- \n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    
    int frequency[101] = {0}; 
    int totalPairs = 0;

    
    for(int i = 0; i < n; i++) {
        int currentNum = nums[i];

        
        totalPairs += frequency[currentNum];

        
        frequency[currentNum]++;
    }

    cout << "The number of good pairs is: " << totalPairs << "\n";

    return 0;
}