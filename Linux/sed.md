## sed command - stream editor

the sed command is a stream editor used to perform basic text transformations
and a powerful tool for making quick edits to files or streams of data

for examples i will use a text file like that:

```
Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Sunday
```

and now i use this command to replace 'Thursday' to 'BorningDay' (i had nothing idea for this example)

```
sed 's/Thursday/BorningDay/' filename.txt

Monday
Tuesday
Wednesday
BorningDay
Friday
Saturday
Sunday
```

## options

| Flag | Action |
| :--- | :--- |
| `-i` | Edit file in-place |
| `-n` | Silence output (use `p` to print) |
| `-e` | Chain multiple commands |
| `-r` | Use extended regex |
| `-f` | Use a script file for complex logic |

## `-i` - edit files in place

The -i option allows you to edit files directly without having to save them separately.
without this option sed outputs the result to the standard output, and you must redirect it to a file to save changes


## `-n` - suppress printing
By default, `sed` prints every line of the input file to the output after processing it. The `-n` option suppresses this behavior. This is most powerful when combined with the `p` (print) command.

**Example:** Only print the 4th line (Thursday):
```bash
sed -n '4p' filename.txt
# Output: Thursday
```

## `-r` (or `-E`) - extended regular expressions
Standard `sed` uses basic regular expressions. `-r` (or `-E` on macOS/BSD) enables extended regex, allowing you to use symbols like `+`, `?`, `|`, and `()` without escaping them.

**Example:** Match lines that start with 'S' followed by 'at' or 'un':
```bash
sed -rn '/S(at|un)urday/p' filename.txt
# Output: 
# Saturday
# Sunday
```

## `-e` - multiple commands
Use `-e` when you want to perform multiple editing tasks in a single pass.

**Example:** Replace both Monday and Tuesday:
```bash
sed -e 's/Monday/Funday/' -e 's/Tuesday/Chewsday/' filename.txt
```

## Common Address Ranges
`sed` commands can be restricted to specific parts of a file using addresses:

*   **Line numbers:** `sed '1,3d' filename.txt` (Deletes lines 1 through 3).
*   **Pattern matching:** `sed '/Friday/,/Sunday/d' filename.txt` (Deletes from the first occurrence of Friday until Sunday).
*   **Negation (`!`):** `sed '4!d' filename.txt` (Deletes everything *except* line 4).

## Useful Commands
While `s` (substitute) is the most popular, these are essential:

*   **`d` (Delete):** Removes lines.
    *   `sed '2d' filename.txt` (Delete line 2).
*   **`p` (Print):** Prints the pattern space (used with `-n`).
*   **`q` (Quit):** Exit `sed` as soon as a condition is met (great for performance on large files).
    *   `sed '3q' filename.txt` (Stop after reading line 3).
*   **`i` (Insert):** Inserts text before a line.
    *   `sed '1i\---Start of Week---' filename.txt`

## Pro-Tip: Backup with `-i`
When using `-i`, it is good practice to create a backup file in case of a mistake. You can provide an extension to `-i`:

```bash
sed -i.bak 's/Monday/Funday/' filename.txt
```
*This will modify `filename.txt` and save the original version as `filename.txt.bak`.*
