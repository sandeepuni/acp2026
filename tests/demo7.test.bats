#!/usr/bin/env bats

@test "demo7 test 1 - equal strings" {
    run bash -c "printf 'hello\nhello\n' | /Users/sandeepunni/acp2026/level1/demo7"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"Equal"* ]]
}

@test "demo7 test 2 - first string greater" {
    run bash -c "printf 'zebra\napple\n' | /Users/sandeepunni/acp2026/level1/demo7"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"First string is Greater"* ]]
}

@test "demo7 test 3 - second string greater" {
    run bash -c "printf 'apple\nzebra\n' | /Users/sandeepunni/acp2026/level1/demo7"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"Second string is Greater"* ]]
}

@test "demo7 test 4 - same single character equal" {
    run bash -c "printf 'a\na\n' | /Users/sandeepunni/acp2026/level1/demo7"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"Equal"* ]]
}

@test "demo7 test 5 - uppercase vs lowercase" {
    run bash -c "printf 'Apple\napple\n' | /Users/sandeepunni/acp2026/level1/demo7"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"Second string is Greater"* ]]
}

@test "demo7 test 6 - same prefix different length" {
    run bash -c "printf 'apple\napp\n' | /Users/sandeepunni/acp2026/level1/demo7"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"First string is Greater"* ]]
}

@test "demo7 test 7 - numbers as strings" {
    run bash -c "printf '123\n456\n' | /Users/sandeepunni/acp2026/level1/demo7"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"Second string is Greater"* ]]
}