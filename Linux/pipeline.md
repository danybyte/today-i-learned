A pipeline in Linux is a powerful mechanism that connects the standard output (stdout) of one command directly to the standard input (stdin) of another command
This allows you to chain multiple simple commands together to perform complex data processing tasks without creating intermediate temporary files
The pipe operator is represented by the vertical bar symbol: |

# Basic example:
```bash
command1 | command2 | command3 | ...
```

command1 executes and produces output
That output is fed as input to command2
command2 processes it and passes its output to command3, and so on

# Common Examples
## 1. Combining ls and grep
List files and filter those containing "txt":

```bash
ls -l | grep "txt"
```

## 2. Counting Lines, Words, or Characters
Count the number of files in a directory:

```bash
ls | wc -l
```
