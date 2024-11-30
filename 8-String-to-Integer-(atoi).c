
int myAtoi(char* s) {
    int i = 0;
    int sign = 1; // Default is positive
    long result = 0;

    // Step 1: Ignore leading whitespace
    while (isspace(s[i])) {
        i++;
    }

    // Step 2: Determine the sign
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Step 3: Convert characters to integer until a non-digit is found
    while (isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');
        i++;

        // Step 4: Handle overflow and underflow
        if (result * sign > INT_MAX) return INT_MAX;
        if (result * sign < INT_MIN) return INT_MIN;
    }

    return (int)(result * sign);
}