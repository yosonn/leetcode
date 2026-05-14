---
name: leetcode-answer-auto-upload
description: Create and publish weekly LeetCode solution folders for the user's GitHub leetcode repository. Use when the user asks to add one or more LeetCode problem answers, infer the repository's week/folder/file naming format, generate C++ and pseudocode files, validate the solutions, commit them, and push them to GitHub.
---

# Leetcode Answer Auto Upload

## Overview

Automate the recurring workflow for the user's `leetcode` GitHub repository: inspect the existing structure, create the next `weekN` folder, add one folder per problem, write `README.md` pseudocode and `solution.cpp`, validate behavior, then commit and push.

## Workflow

1. Resolve the repository.
   - Prefer the connected GitHub app to find the repository named `leetcode`.
   - If a local checkout exists, confirm it matches the GitHub remote.
   - If the current directory is empty or not the actual repo checkout, clone `https://github.com/<owner>/leetcode.git` into the intended `leetcode` folder after approval when needed.

2. Infer structure from existing files.
   - Read the remote tree or local checkout before creating files.
   - Current expected layout is:

```text
weekN/
  <problem-number>/
    README.md
    solution.cpp
```

   - Treat the latest top-level `weekN` as the previous week, then create `week(N+1)`.
   - Preserve the repository's observed convention over any generic LeetCode convention. For this repo, problem folders are numeric only, such as `week5/1029/`.

3. Generate each problem.
   - Create `README.md` with concise pseudocode only, matching existing files:

```text
Algorithm FunctionName(arguments)

step <- value

for ... do
    ...

return answer
```

   - Create `solution.cpp` with only the LeetCode-style `class Solution` implementation unless the repo already uses includes or a test harness.
   - Use clear standard approaches and avoid unrelated comments. Prefer simple, accepted C++ solutions.

4. Validate correctness.
   - First try to compile or run a small C++ harness if a compiler is available (`g++`, `clang++`, or `cl`).
   - If no C++ compiler is available, run equivalent behavior tests in an available runtime, or manually reason through LeetCode examples and edge cases.
   - Always report what validation was actually run. Do not claim C++ compilation passed unless it did.

5. Commit and push.
   - Inspect `git status -sb` and staged diff before committing.
   - Stage only the intended new LeetCode files unless the user explicitly asked for the entire worktree and the scope is clean.
   - Use a terse commit message, for example `add week6 leetcode solutions`.
   - Push to the current branch's upstream or `origin/main` when the repo convention is direct pushes to `main`.
   - If the repo is on a protected/default branch and the workflow requires a PR, create a `codex/<description>` branch and draft PR instead.

## Safety Rules

- Never silently stage unrelated local changes.
- Do not overwrite existing problem folders unless the user asks for an update.
- If remote and local histories diverge, stop and inspect before pushing.
- If command execution is blocked by sandboxing or OS permissions, request approval when appropriate and continue with the safest available alternative.

## Final Response

Summarize:

- repository and branch updated
- commit SHA and message
- files created
- validation performed and any limitations
