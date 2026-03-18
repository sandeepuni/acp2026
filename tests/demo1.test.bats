#!/usr/bin/env bats

@test "demo1 test 1" {
  run bash -c "printf '3\n8.6\n2.1\n5.4\n' | ./demo1"

    echo $output >&3

  [ "$status" -eq 0 ]
  [[ "$output" == *"The Largest element: 8.600000"* ]]
  [[ "$output" == *"Index of Max Element: 0"* ]]
}

@test "demo test 2" {
    run bash -c "printf '3\n0\n0\n0\n' | ./demo1"

    echo $output >&3

    [[ "$output" == *"The Largest element: 0.000000"* ]]
    [[ "$output" == *"Index of Max Element: 0"* ]]
}