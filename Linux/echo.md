### echo command - display text

the `echo` command is used to show a line of text or a variable's vleue in the terminal.
to display a massagw use this command:
```
echo "massage"
```
### echo options:
`-n` don't add a new line at the end

`-e` allow special characters like `\n` (for new line)

`-E` don't allow special chracters (default)

### where can be use?

The `echo` command is often used in scripts for debugging or logging information and it's help to see what happend in your script.
##### example:
```
#!/bin/bash
echo "Starting the script..."
#Your script commands here
echo "Script finished."
```

sources:

[w3schools](https://www.w3schools.com/bash/bash_echo.php)
