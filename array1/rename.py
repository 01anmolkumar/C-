import os

def remove_trailing_spaces(directory):
    try:
        # List all files in the directory
        files = os.listdir(directory)
        print(files)
        # Iterate through each file
        for filename in files:
            # Check if the last character of the filename is a space
            if filename[-5] == ' ':
                # Construct the new filename by removing the trailing space
                new_filename = filename.rstrip()
                
                # Rename the file
                os.rename(os.path.join(directory, filename), os.path.join(directory, new_filename))
                print(f"Removed trailing space from file '{filename}'.")
    except FileNotFoundError:
        print(f"Directory '{directory}' not found.")

# Example usage:
directory_path = r"E:\OneDrive\Desktop\coding\c++\array1"

remove_trailing_spaces(directory_path)
