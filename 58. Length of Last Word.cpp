class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        size_t firstNonSpace = s.find_first_not_of(" ");
        size_t firstSpace = s.find(" ", firstNonSpace);
        string firstWord = s.substr(firstNonSpace, firstSpace-firstNonSpace);
        return firstWord.size();
        
    }
};
