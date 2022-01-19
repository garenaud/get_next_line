# Get_next_line (without bonus)
Project from 42 school, get_next_line is a function that reads a file and allows you to read a line ending with a newline character from a file descriptor. When you call the function again on the same file, it grabs the next line.

<img width="787" alt="Screen Shot 2022-01-19 at 4 56 45 PM" src="https://user-images.githubusercontent.com/61365508/150167480-d70dac67-bc15-4b54-b97a-3d36e9bcbe4e.png">

## Main function
```
char	*get_next_line(int fd)
{
	char		*line;
	static char	*raw_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	raw_line = ft_get_raw_line(fd, raw_line);
	if (!raw_line)
		return (NULL);
	line = ft_get_line(raw_line);
	raw_line = ft_get_start(raw_line);
	return (line);
}
```
#### char	*ft_get_raw_line(int fd, char *raw_line)
This function will grab the line with the character after the newline character.


#### char	*ft_get_line(char *raw_line)
This function will use your raw line, and return the characters before the newline character. The return of this function will be the return of the main function.


#### char	*ft_get_start(char *raw_line)
This function will use your raw line, and return the characters after the newline character. The return of this function will be stocked in the static variable of the main function in the purpose to be join to the buff if you call the function again.
