# Strings

**10 programs** — These programs cover string handling in C using character arrays and standard string library functions from `string.h` and `ctype.h`.

---

## Programs

| File | Description |
|------|-------------|
| string_length.c | Find and display the length of a string entered by user |
| string_backward.c | Display the string in reverse order character by character |
| word_count.c | Count the total number of words in a given string |
| string_concatenate.c | Concatenate (join) one string to the end of another |
| string_compare.c | Compare two strings and check if they are equal or not |
| palindrome_check.c | Check whether a given string is a palindrome |
| substring_search.c | Search for a substring inside a string and display its starting position |
| reverse_string.c | Reverse the entire string and store the result |
| string_lowercase.c | Convert all characters of a string to lowercase |
| string_uppercase.c | Convert all characters of a string to uppercase |

---

## Concepts Used

- Character arrays — `char str[100]`
- `strlen()` — find length of string
- `strcat()` — concatenate two strings
- `strcmp()` — compare two strings
- `strcpy()` — copy one string into another
- `tolower()`, `toupper()` from `ctype.h`
- Manual string reversal using loops
- Palindrome logic — compare original with reversed
- Substring searching using nested loops

---

## How to Run

```bash
gcc filename.c -o output
./output
```
