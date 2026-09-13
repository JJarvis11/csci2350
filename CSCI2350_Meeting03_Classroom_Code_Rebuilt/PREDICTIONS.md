# Meeting 03 prediction record

Write a prediction before each run. A short phrase is enough.

## 1 — Comparisons
For `score = 72`, predict the output of `score >= 60`, `score == 72`, and
`score != 72`. Why does the first true value print as `1`?

## 2 — Inside a range
Before `make 2`, predict `atLeastZero`, `atMost100`, and `insideRange` for
`score = -1`, `0`, `72`, `100`, and `101`.

## 3 — De Morgan's law
For `score = 101`, predict `tooLow`, `tooHigh`, `outside`, `insideByNot`, and
`insideDirect`. The last two results must agree.

## 4 — Chained comparison
For `score = -20`, predict the result of `0 <= score <= 100`. Then predict the
correct range rule. Explain why the two results differ.

## 5 — Short-circuit AND
With `possible = 0`, predict whether the percentage division is evaluated.
Then change `possible` to `100` and predict the result again.

## 6 — Integer conditions
Predict how `0`, `-1`, and `2` convert to `bool`. Which of them are positive?

## 7 — Assignment in a condition
Predict the value of `score` after `(score = 60)` and whether the branch runs.

## 8 — Else-if ladder
Predict the grade for `59`, `60`, `69`, `70`, `79`, `80`, `89`, and `90`.

## 9 — Switch
Predict the output for `reportChoice` values `1`, `2`, and `9`. What would
happen if `break` were removed from case 1?

## Exit ticket
Write one correct rule for accepting scores from 0 through 100, one boundary
pair that tests the rule, and one C++ condition pitfall you will avoid.
