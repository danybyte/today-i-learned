## grep command - search patterns
the grep command is used to search for text patterns within files

The grep command (Global Regular Expression Print) uses Regular Expressions (Regex) to search through text files for complex patterns rather than just fixed strings.

```
grep 'a word' file.txt
```

## `grep` options:
`-i` search ignore case differences (uppercase or lowercases)

`-r` search through all files in a directory and it's subdirectories

`-v` find lines that do not match the pattern

## Common Meta-Characters
| character | meaning                                                  | example                                             |
|-----------|----------------------------------------------------------|-----------------------------------------------------|
| .         | Matches any single character except newline.             | `grep 'h.t'` matches hat, hot, hit.                 |
| ^         | Matches the beginning of a line.                         | `grep '^Start'` finds lines beginning with "Start". |
| $         | Matches the end of a line.                               | `grep 'end$'` finds lines ending with "end".        |
| *         | Matches 0 or more occurrences of the previous character. | `grep 'ab*c'` matches ac, abc, abbc.                |
| +         | Matches 1 or more occurrences (ERE/PCRE).                | `grep -E 'ab+c'` matches abc, but not ac.           |
| ?         | Matches 0 or 1 occurrence (ERE/PCRE).                    | `grep -E 'https?'` matches both http and https.     |
| []        | Matches any single character within the brackets.        | `grep '[aeiou]'` matches any vowel.                 |
| \|        | Logical OR (ERE/PCRE).                                   | `grep -E 'cat\|dog'` matches lines with cat or dog. |

### using `grep' with regular expressions:
For example, this command finds lines starting with a letter.
```
grep '^[A-za-z]' file.txt
```
