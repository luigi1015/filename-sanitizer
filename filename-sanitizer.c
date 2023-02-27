#include <stdio.h>
#include <dirent.h>

int main() {
	// A directory (aka a folder).
	DIR *directory;

	// A directory entry (aka a file).
	struct dirent *entry;

	// Open the current directory.
	directory = opendir(".");

	if(directory == NULL) {
		// There was a problem opening the directory.
		printf("Error opening current directory.\n");
		return 1;
	} else {
		printf("Opened current directory.\n");

		// Go through the various files of the directory.
		while( entry = readdir(directory) ) {
			// Print the filename.
			printf("File: %s\n", entry->d_name);

			// **NOTE** At least when running on my Ubuntu desktop, this currently includes special "files" like "." and "..". It also includes a hidden directory ".git".
		}
	}

	// Close the directory.
	closedir(directory);

	return 0;
}
