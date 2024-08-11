class Solution {
public:
    bool isPalindrome(string s) {
        
        return isPalindromeRecursive(s, 0, s.length() - 1);
    }
    bool isPalindromeRecursive(const std::string& s, int left, int right) {
        // Move left index forward if it points to a non-alphanumeric character
        while (left < right && !std::isalnum(s[left])) {
            ++left;
        }
        // Move right index backward if it points to a non-alphanumeric character
        while (left < right && !std::isalnum(s[right])) {
            --right;
        }
        // Base case: pointers have crossed or are pointing to the same character
        if (left >= right) {
            return true;
        }
        // Check if the current characters are equal
        if (std::tolower(s[left]) != std::tolower(s[right])) {
            return false;
        }
        // Recursively check the next pair of characters
        return isPalindromeRecursive(s, left + 1, right - 1);
    }
};