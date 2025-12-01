# Project

This project explores the use of file descriptors, POSIX system calls, and basic file operations in C on Linux. Each task demonstrates a different aspect of working with files.

---

# Task 0-read_textfile.c

## Function:

ssize_t read_textfile(const char *filename, size_t letters);

* Reads a text file and prints it to standard output.

* Returns the number of characters read and printed.

* Returns `0` if the file cannot be opened, read, or written to.

* Returns `0` if `filename` is `NULL`.

---

# Task 1-create_file.c

## Function:

int create_file(const char *filename, char *text_content);

* Creates a file named `filename` and writes `text_content` to it.

* File permissions: `rw-------` (0600)

* Returns `1` on success, `-1` on failure.

* Truncates the file if it exists.

* If `filename` is `NULL`, return `-1`.

* If `text_content` is `NULL`, create an empty file.

---

# Task 2-append_text_to_file.c

## Function:

int append_text_to_file(const char *filename, char *text_content);

* Appends `text_content` to the end of an existing file.

* Returns `1` on success, `-1` on failure.

* Does not create the file if it doesn't exist.

* If `text_content` is `NULL`, nothing is added (return `1` if the file exists).

---

# Task 3-cp.c

## Program:

cp file_from file_to

* Copies the contents of `file_from` to `file_to`.

* If arguments are incorrect: exit code 97 + usage message.

* If `file_from` cannot be read: exit code 98 + error message.

* If `file_to` cannot be created/written: exit code 99 + error message.

* If closing a file descriptor fails: exit code 100 + error message.

* Reads 1024 bytes at a time using a buffer.

* Permissions of `file_to`: `rw-rw-r--` (0664)