# Assignment 2 AI Reflection

Name: Joseph Jarvis

If you used AI while working on this assignment, answer these three questions.
Write one to three sentences for each. If you did not use AI, omit this file or
leave this template unchanged.

## 1 What help did you ask for

Name the tool and the function or code section you asked about.

Answer: I asked Gemini why the result of make 2 says FAIL when the output seemingly matches the expected output.

## 2 What did you change

Describe one suggestion you accepted, changed, or rejected. Identify the code
and explain your decision.

Answer: I accepted the AI's suggestion of using the printScores method to ensure the format is identical to the tests. Initially, I manually coded a for loop to print the working scores because I didn't realize there was a function for that exact purpose. I had an additional space after printing the scores, so using printScores got rid of that formating issue.

## 3 What did you test

Give one input, the output you expected, and the output you obtained. Describe
one code change you made after testing, or explain why no change was needed.

Answer: I tested the code after substituting my for loop for a call of the printScores method. I expected the test to result in a PASS result for all of the cases. My code still did not work, so I analyzed it some more. I then noticed that I had capitalized the words in the ouput, and the expected output had all lowercase letters. I changed the words to lowercase, and the code eventually worked.
