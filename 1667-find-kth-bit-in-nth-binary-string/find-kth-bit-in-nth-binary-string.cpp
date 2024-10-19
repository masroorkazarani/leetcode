class Solution {
public:
    char findKthBit(int n, int k) {
        string actual = "0";
        while (actual.length() <= k)
        {
            string inverse = "";
            for (int i = 0; i < actual.length(); i++)
            {
                if (actual[i] == '0')
                    inverse += '1';
                else
                    inverse += '0';
            }
            reverse(inverse.begin(),inverse.end());
            actual = actual + '1' + inverse;
        }
    return actual[k-1];
    }
};