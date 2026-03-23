#!/usr/bin/env bats

@test "demo4 test 1 - Flight found first" {
    run bash -c "printf '3\n23\nAbu Dhabi\n234\n344\nDubai\n23\n345\nDelhi\n23\nAbu Dhabi\n' | /Users/sandeepunni/acp2026/level1/demo4"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"Flight Found"* ]]
    [[ "$output" == *"23"* ]]
    [[ "$output" == *"234"* ]]
}

@test "demo4 test 2 - Flight found second" {
    run bash -c "printf '3\n23\nAbu Dhabi\n234\n344\nDubai\n23\n345\nDelhi\n23\nDubai\n' | /Users/sandeepunni/acp2026/level1/demo4"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"Flight Found"* ]]
    [[ "$output" == *"344"* ]]
    [[ "$output" == *"23"* ]]
}

@test "demo4 test 3 - Flight found third" {
    run bash -c "printf '3\n23\nAbu Dhabi\n234\n344\nDubai\n23\n345\nDelhi\n23\nDelhi\n' | /Users/sandeepunni/acp2026/level1/demo4"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"Flight Found"* ]]
    [[ "$output" == *"345"* ]]
    [[ "$output" == *"23"* ]]
}

@test "demo4 test 4 - Flight not found" {
    run bash -c "printf '3\n23\nAbu Dhabi\n234\n344\nDubai\n23\n345\nDelhi\n23\nLondon\n' | /Users/sandeepunni/acp2026/level1/demo4"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"Flight not found"* ]]
}