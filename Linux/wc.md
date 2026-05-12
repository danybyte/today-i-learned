today i learn `wc` in bash. this command is for display some details from a file.
## The wc command in Linux is used to count lines, words, characters, and bytes in a file or from input you provide
Whether you're analyzing logs reading large datasets, or just checking the size of your scripts, wc gives a quick summary

* **Line count:** number of lines (each line ends with a newline character).
* **Word count:** total number of words (words are separated by spaces, tabs, or newlines).
* **Byte count:** total number of bytes (which may differ from characters in some cases).
* **Filename:** name of the file that was processed.

## Example:
we will creat a txt file named colors with this content:
### colors.txt:
```
blue
yellow
black
green
gray

```
and now we run this command in terminal to display line count, word count, byte count and filename:

```
wc colors.txt
```
and output is something like that:
```
5 5 29 colors.txt
```

sources: <br>
[geeksforgeeks](https://www.geeksforgeeks.org/linux-unix/wc-command-linux-examples/)
