<!-- Replace XXX with the issue ID created in Jira-->
## Pull Request Title ([ID])
[ID]: https://automaticaddison.com/tutorials/

<!-- Replace the text below -->
Provide the high-level purpose of this pull request and a summary of the changes made.

### Why is this Pull Request necessary?

[Add text here]

### What does it accomplish?
- [Add text here]
- [Add text here]

### Notes for reviewers
<!-- Include any relevant motivation, context, or background information. Mention dependencies required for this PR, or specific points that need special attention. Also, provide instructions for testing the code, if applicable. -->
[Add text here]

<!-- Desired reviewers: @mention -->
<!-- Mention any additional reviewers here if needed, beyond the default ones -->
[Add text here]

## Submitter checklist
**To be reviewed before creating the PR (~~Cross-out~~ non-applicable items)**
<!-- Review all the points below and mark each with an `[x]` if applicable -->

- [ ] Removed "WIP" or "Draft" from the PR title
- [ ] Clear and descriptive PR title and description
- [ ] JIRA task ID included in the title (within brackets)
- [ ] Reviewer notes filled in to assist with the review process
- [ ] Correct target branch set (Default: `branch_name`)
- [ ] Assigned yourself as the assignee and selected an appropriate reviewer
- [ ] Code is properly formatted
- [ ] Unit tests pass locally
- [ ] Integration tests pass in CI
- [ ] Relevant entry added to the Unreleased section in [CHANGELOG.md]
- [ ] The latest versions of repository and package templates are used

## Reviewer checklist

Verify that the "Submitter checklist" was correctly checked. Then check the list below (~~Cross-out~~ non-applicable items).

**Note: Only the reviewer is allowed to make changes in this section**

- [ ] Functional code is written in C++17; tooling code may be written in Python3 or Bash
- [ ] The problem/feature is solved (reproducibility)
- [ ] Every node is registered as a component
- [ ] Unit tests are logical and cover both basic functionality and error cases
- [ ] Integration tests are included and functional
- [ ] Package and file names, as well as organization, are sensible and consistent with the defined naming convention
- [ ] New classes, methods, functions in headers are documented with doxygen-style comments
- [ ] CMakeLists.txt is well written and the version of all dependencies is specified
- [ ] TODO flag only used for future improvements
- [ ] Conversations in the PR are over, or it is explicit that a reviewer is not blocking the change.