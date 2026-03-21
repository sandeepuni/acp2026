#!/usr/bin/env bats

@test "demo2 test 1 - Rectangle 1 is largest" {
    run bash -c "printf 'RectA\n10\n5\nRectB\n4\n3\nRectC\n2\n2\n' | ../level1/demo2"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"RectA"* ]]
    [[ "$output" == *"50.00"* ]]
}

@test "demo2 test 2 - Rectangle 2 is largest" {
    run bash -c "printf 'RectA\n2\n2\nRectB\n10\n5\nRectC\n3\n3\n' | ../level1/demo2"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"RectB"* ]]
    [[ "$output" == *"50.00"* ]]
}

@test "demo2 test 3 - Rectangle 3 is largest" {
    run bash -c "printf 'RectA\n2\n2\nRectB\n3\n3\nRectC\n10\n5\n' | ../level1/demo2"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"RectC"* ]]
    [[ "$output" == *"50.00"* ]]
}

@test "demo2 test 4 - Equal areas" {
    run bash -c "printf 'RectA\n4\n4\nRectB\n4\n4\nRectC\n4\n4\n' | ../level1/demo2"

    echo $output >&3

    [ "$status" -eq 0 ]
    [[ "$output" == *"same area"* ]]
}