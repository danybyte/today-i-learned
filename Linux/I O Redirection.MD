Hello, I am inside Iran. It has been around 40 or 50 days (I've forgotten exactly) that there is war here, and our government has cut off the internet from the people. People have no access to news, information, or really anything. Many businesses have been completely destroyed, etc. Unfortunately, this has become somewhat normal for us because this is not the first time they have taken the internet away from us. Even before the war, we had weak and filtered internet. But during this time when schools are closed, I decided to start learning Linux with the book 'The Linux Command Line: A Complete Introduction' by William Shotts. Today I progressed to page 56, chapter 6, and I want to write down what I have learned about I/O Redirection.

| Stream | Name               | File Descriptor | Default destination |
|--------|--------------------|-----------------|---------------------|
| stdin  | Standard Input     | 0               |Keyboard             |
| stdout | Standard Output    | 1               |Screan               |
| stderr | Standard Error     | 2               |Screan               |

## Redirection orerators:
| operators | meaning | example |
|-----------|---------|---------|
| >         | redirect stdout to file (overwrite) | ls > list.txt |
