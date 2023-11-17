import os
import requests
from git import Repo

# Your LeetCode credentials
leetcode_username = "simranyadav00785@gmail.com"
leetcode_password =   # or use another authentication method

# Path to your local Git repository
git_repo_path = "./LeetCode_Solutions"
# Replace with your repository URL
# Ensure it ends with .git
repo_url = "https://github.com/princeyadav00785/LeetCode_Solutions.git"

# LeetCode API URLs
leetcode_login_url = "https://leetcode.com/accounts/login/"
leetcode_submissions_url = "https://leetcode.com/api/submissions/"

# Function to authenticate on LeetCode


def leetcode_login(session):
    login_payload = {
        "login": leetcode_username,
        "password": leetcode_password,
    }
    session.post(leetcode_login_url, data=login_payload)

# Function to fetch LeetCode submissions


def fetch_leetcode_submissions(session):
    response = session.get(leetcode_submissions_url, params={
                           "offset": 0, "limit": 5})  # Adjust limit as needed

    # Print the entire response to inspect its structure
    print(response.json())

    # Check if the 'submissions_dump' key is present
    if 'submissions_dump' in response.json():
        return response.json()["submissions_dump"]
    else:
        print("Error: 'submissions_dump' key not found in the API response.")
        return []

# Function to commit code to Git


def commit_to_git(repo, problem_title, code):
    branch_name = f"leetcode/{problem_title}"

    # Create a new branch for each LeetCode problem
    repo.create_head(branch_name)
    repo.heads[branch_name].checkout()

    # Write the code to a file
    file_path = os.path.join(git_repo_path, f"{problem_title}.py")
    with open(file_path, "w") as file:
        file.write(code)

    # Stage, commit, and push
    repo.index.add([file_path])
    repo.index.commit(f"Solve LeetCode problem: {problem_title}")
    repo.remotes.origin.push(branch_name)


# Main script
if __name__ == "__main__":
    # Clone the Git repository if it doesn't exist, otherwise pull changes
    if not os.path.exists(git_repo_path):
        repo = Repo.clone_from(repo_url, git_repo_path)
    else:
        repo = Repo(git_repo_path)
        if repo.is_dirty():
            print("Local repository has uncommitted changes. Skipping pull.")
        else:
            origin = repo.remote(name='origin')
            origin.pull()

    # Create a session for LeetCode authentication
    session = requests.Session()
    leetcode_login(session)

    # Fetch LeetCode submissions
    submissions = fetch_leetcode_submissions(session)

    # Loop through submissions and commit to Git
    for submission in submissions:
        problem_title = submission["title"]
        code = submission["code"]

        # Commit to Git
        commit_to_git(repo, problem_title, code)

    # Switch back to the main branch
    repo.heads.master.checkout()
