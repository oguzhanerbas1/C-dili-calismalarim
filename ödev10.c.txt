#include <stdbool.h>
#include <string.h>

bool find_word(char* sentence, char* word) 
{

  if (strstr(sentence, word) != NULL) 
  {
    return true;
  } 

  else 
  {
    return false;
  }

}

// Example usage
#include <stdio.h>

int main()
{

    

  printf("%d\n", find_word("The quick brown fox jumps over the lazy dog", "fox"));  // Output: 1
  printf("%d\n", find_word("The quick brown fox jumps over the lazy dog", "cat"));  // Output: 0

  return 0;
}
