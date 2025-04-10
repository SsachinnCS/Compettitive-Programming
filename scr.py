import requests

def get_github_raw_content(url):
    # Convert the GitHub URL to the raw content URL
    raw_url = url.replace('https://github.com/', 'https://raw.githubusercontent.com/')
    raw_url = raw_url.replace('/blob/', '/')
    
    # Make a GET request to the raw content URL
    response = requests.get(raw_url)
    
    if response.status_code == 200:
        return response.text
    else:
        return f"Failed to fetch the file. Status code: {response.status_code}"

# GitHub URL
github_url = "https://github.com/abufarhad/Codeforces-Problems-Solution/blob/master/486B%20OR%20in%20Matrix.cpp"

# Get the content of the file
file_content = get_github_raw_content(github_url)

# Print the content
print(file_content)