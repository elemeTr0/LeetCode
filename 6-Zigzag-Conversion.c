char* convert(char* s, int numRows) {
    if (numRows == 1) return s;  // No zigzag if only 1 row

    // Determine the length of the input string
    int len = strlen(s);

    // Create an array of strings (rows) to hold characters for each row
    char** rows = (char**)malloc(numRows * sizeof(char*));
    for (int i = 0; i < numRows; i++) {
        rows[i] = (char*)malloc((len + 1) * sizeof(char));
        rows[i][0] = '\\0';  // Initialize with an empty string
    }

    int currRow = 0;
    int goingDown = 0;

    // Traverse the string and append characters to the respective row
    for (int i = 0; i < len; i++) {
        char c = s[i];
        int rowLen = strlen(rows[currRow]);
        rows[currRow][rowLen] = c;
        rows[currRow][rowLen + 1] = '\\0';

        // Change direction if we're at the first or last row
        if (currRow == 0 || currRow == numRows - 1) goingDown = !goingDown;

        // Move to the next row (down or up)
        currRow += goingDown ? 1 : -1;
    }

    // Concatenate all rows into one string
    char* result = (char*)malloc((len + 1) * sizeof(char));
    result[0] = '\\0';

    for (int i = 0; i < numRows; i++) {
        strcat(result, rows[i]);
        free(rows[i]);  // Free each row after use
    }

    free(rows);  // Free the rows array
    return result;
}