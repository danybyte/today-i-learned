# `cut` Command: A Comprehensive Guide

The `cut` command is a classic Unix utility used to extract specific sections (fields or characters) from each line of a file or piped input. It is the go-to tool for processing simple structured data like CSVs, log files, or fixed-width text.

---

## 1. Syntax Overview
```bash
cut OPTION... [FILE]...
```
*If no `FILE` is provided, `cut` reads from standard input (stdin).*

---

## 2. Options Cheat Sheet

| Option | Description |
| :--- | :--- |
| `-f, --fields=LIST` | Select only these fields (e.g., `-f1,3`). |
| `-d, --delimiter=DELIM` | Use `DELIM` instead of the default TAB. |
| `-c, --characters=LIST` | Select specific character positions (e.g., `-c1-5`). |
| `-b, --bytes=LIST` | Select specific byte positions (useful for non-UTF8). |
| `--complement` | Output the fields or characters **not** specified. |
| `--output-delimiter=STRING` | Use `STRING` as the output delimiter instead of the input one. |

---

## 3. Detailed Examples

### A. Field Extraction (Delimited Data)
When working with structured data, you must define the delimiter (`-d`) and the field numbers (`-f`).

**Example: Extracting columns from a CSV file**
Given `data.csv`: `Name,Role,ID`
```bash
# Get only the Names (Field 1)
cut -d',' -f1 data.csv

# Get Names and IDs (Fields 1 and 3)
cut -d',' -f1,3 data.csv
```

**Example: Working with ranges**
You can specify a range of fields using a hyphen.
```bash
# Extract fields 1 through 3
cut -d':' -f1-3 /etc/passwd
```

---

### B. Character Extraction (Fixed-Width Data)
Useful when your data does not have a delimiter but is instead padded by fixed character counts.

**Example: Processing logs with timestamps**
If you have a log format where the date is always the first 10 characters:
```bash
# Get first 10 characters
echo "2023-10-25 14:00:00 ERROR" | cut -c 1-10
# Output: 2023-10-25
```

---

### C. Advanced: Complement and Delimiter Swapping
The `--complement` and `--output-delimiter` flags are powerful for data transformation.

**Example: Removing the last field**
```bash
# If you have a list of entries, remove the first one
echo "ID:Name:Role" | cut -d':' -f1 --complement
# Output: Name:Role
```

**Example: Converting a CSV to a space-separated list**
```bash
cat data.csv | cut -d',' -f1,2 --output-delimiter=' '
```

---

## 4. Key Limitations & Gotchas

*   **Delimiter Strictness:** `cut` sees every delimiter as a field separator. If you have two consecutive spaces and use `-d' '`, `cut` will interpret the space between them as an empty field.
*   **Static Order:** Regardless of the order you provide in the `-f` flag (e.g., `-f3,1`), `cut` will **always** output the fields in the order they appear in the original file (1, then 3).
*   **Single-Byte Delimiters:** The `-d` option only accepts a single character. You cannot use a multi-character string (like `", "`) as a delimiter.

---

## 6. Pro-Tip: Combining Commands
`cut` is often used in a pipeline to clean up raw command output:

```bash
# Get the current date and only show the day of the month
date | cut -d' ' -f3
```
