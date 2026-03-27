#!/usr/bin/env bats

@test "demo8 test 1 - basic concatenation" {
    run bash -c "printf 'Hello\nWorld\n' | /Users/sandeepunni/acp2026/level1/demo8"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"HelloWorld"* ]]
}

@test "demo8 test 2 - concatenation with spaces" {
    run bash -c "printf 'Hello \nWorld\n' | /Users/sandeepunni/acp2026/level1/demo8"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"Hello World"* ]]
}

@test "demo8 test 3 - numbers as strings" {
    run bash -c "printf '123\n456\n' | /Users/sandeepunni/acp2026/level1/demo8"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"123456"* ]]
}

@test "demo8 test 4 - single characters" {
    run bash -c "printf 'A\nB\n' | /Users/sandeepunni/acp2026/level1/demo8"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"AB"* ]]
}

@test "demo8 test 5 - first string empty" {
    run bash -c "printf '\nWorld\n' | /Users/sandeepunni/acp2026/level1/demo8"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"World"* ]]
}

@test "demo8 test 6 - long strings" {
    run bash -c "printf 'Programming\nInC\n' | /Users/sandeepunni/acp2026/level1/demo8"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"ProgrammingInC"* ]]
}

@test "demo8 test 7 - same strings" {
    run bash -c "printf 'Hello\nHello\n' | /Users/sandeepunni/acp2026/level1/demo8"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"HelloHello"* ]]
}