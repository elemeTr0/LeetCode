int palLength(char* s, int left, int right){
     while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}
char* longestPalindrome(char* s) {
    int start = 0, maxLength=0;
    int len=strlen(s);

    for (int i = 0; i < len; i++) {
        // Case 1: Odd-length palindrome (single character center)
        int len1 = palLength(s, i, i);
        // Case 2: Even-length palindrome (two consecutive characters as center)
        int len2 = palLength(s, i, i + 1);
        
        // Take the maximum of the two palindrome lengths
        int currentLength = (len1 > len2) ? len1 : len2;
        
        // Update the starting index and maximum length if a longer palindrome is found
        if (currentLength > maxLength) {
            maxLength = currentLength;
            start = i - (currentLength - 1) / 2;  // Calculate the start index of the palindrome
        }
    }

    // Create the result string and return it
    char* result = (char*)malloc((maxLength + 1) * sizeof(char)); // +1 for null terminator
    strncpy(result, &s[start], maxLength);  // Copy the longest palindrome to the result string
    result[maxLength] = '\\0';  // Null-terminate the string
    
    return result;
}