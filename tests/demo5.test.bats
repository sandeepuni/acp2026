#!/usr/bin/env bats

@test "demo5 test 1 - basic swap" {
    run bash -c "printf '3\n1\n2\n3\n4\n5\n6\n' | /Users/sandeepunni/acp2026/level1/demo5"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"4"* ]]
    [[ "$output" == *"5"* ]]
    [[ "$output" == *"6"* ]]
}

@test "demo5 test 2 - single element swap" {
    run bash -c "printf '1\n10\n20\n' | /Users/sandeepunni/acp2026/level1/demo5"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"10"* ]]
    [[ "$output" == *"20"* ]]
}

@test "demo5 test 3 - swap with negative numbers" {
    run bash -c "printf '3\n-1\n-2\n-3\n4\n5\n6\n' | /Users/sandeepunni/acp2026/level1/demo5"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"-1"* ]]
    [[ "$output" == *"4"* ]]
}

@test "demo5 test 4 - swap with zeros" {
    run bash -c "printf '3\n0\n0\n0\n1\n2\n3\n' | /Users/sandeepunni/acp2026/level1/demo5"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"0"* ]]
    [[ "$output" == *"1"* ]]
}

@test "demo5 test 5 - swap with equal arrays" {
    run bash -c "printf '3\n5\n5\n5\n5\n5\n5\n' | /Users/sandeepunni/acp2026/level1/demo5"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"5"* ]]
}

@test "demo5 test 6 - after swap array 1 has old array 2 values" {
    run bash -c "printf '3\n1\n2\n3\n7\n8\n9\n' | /Users/sandeepunni/acp2026/level1/demo5"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"After swapping"* ]]
    [[ "$output" == *"7"* ]]
    [[ "$output" == *"8"* ]]
    [[ "$output" == *"9"* ]]
}