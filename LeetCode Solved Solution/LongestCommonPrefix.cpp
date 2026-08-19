#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = " ";

        for (int j = 0; j < strs[0].size(); j++)
        {
            for (int i = 1; i < strs.size(); i++)
            {
                if (j >= strs[i].size() || strs[i][j] != strs[0][j])
                {
                    return result;
                }
                
                
            }
            result += strs[0][j];
        }
        return result;
    }
};

int main(){
    int n;
    cin >> n;

    vector<string> strs(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];   
    }

    Solution Obj;

    string result = Obj.longestCommonPrefix(strs);
    cout << result << endl;
    
    return 0;
}