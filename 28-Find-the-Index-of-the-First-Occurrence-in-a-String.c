int strStr(char* haystack, char* needle) {
  int count = 0;
  for(int i = 0; i < strlen(haystack); i++){
    int ptr = i;
    for(int j = 0; j < strlen(needle); j++){
      if(haystack[i] == needle[j]){
        count++;
        i++;
      }
      else{
        count = 0;
      }
    }
    if(count == strlen(needle)){
      return ptr;
    }
    count = 0;
    i = ptr;
  }
  return -1;
}