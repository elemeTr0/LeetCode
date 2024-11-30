int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int charSet[128] = {0};
    int left = 0, maxLength = 0;
    
    for (int right = 0; right < n; right++) {
        while (charSet[(int)s[right]] > 0) {
            charSet[(int)s[left]]--;
            left++;
        }
        
        charSet[(int)s[right]]++;
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}