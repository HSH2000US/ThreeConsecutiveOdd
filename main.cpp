//
//  main.cpp
//  ArrayOddCheck
//
//  Created by Humzah Hassan on 4/15/21.
//

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std:: vector;
using std:: endl;

class Solution
{
public:
    bool threeConsecutiveOdds(vector <int> arr)
    {
        for(int i = 2; i < arr.size(); i++)
        {
            if (arr.size() < 3)
                return false;
            
            
           else if (arr[i - 2] % 2 == 1 && arr[i - 1] % 2 == 1 && arr[i] % 2 == 1)
               return true;
        }
        return false;
    }
};


int main(int argc, const char * argv[])
{
    Solution Solution;
    
    vector<int> nums(5);
    
    cout << "You will enter 5 numbers" << endl;
    for (int i = 0; i <nums.size(); i++)
    {
        int a = 0;
        cout << " Enter number: "  << endl;
        cin  >> a;
        nums[i] = a;
    }
    
    
    bool t =  Solution.threeConsecutiveOdds(nums);
    if (t == true)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
}
