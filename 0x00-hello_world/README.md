(Note) of 101-quote.c Task

We then use the write() system call to write the message to the standard error.
The write() function takes three arguments: the file descriptor to write to,
a buffer containing the data to write, and the number of bytes to write.
In our case, we pass the file descriptor 2 for the standard error,
the message string as the buffer, and the length of the message as the number of bytes to write.

Finally, we return 1 to indicate that an error occurred.
write(file descriptor, the message, message length)

The first three file descriptors, 0, 1, and 2, are reserved for the standard input,
standard output, and standard error, respectively.
By convention, file descriptor 0 is used for input, file descriptor 1 is used for output,
and file descriptor 2 is used for error messages.
