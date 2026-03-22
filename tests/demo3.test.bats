#!/usr/bin/env bats

@test "demo3 test 1 - Rectangle 1 is largest" {
    run bash -c "printf '3\n10\n5\n4\n3\n2\n2\n' | ../level1/demo3"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"50.00"* ]]
    [[ "$output" == *"10.000000"* ]]
    [[ "$output" == *"5.000000"* ]]
    [[ "$output" == *"Index : 0"* ]]
}

@test "demo3 test 2 - Rectangle 2 is largest" {
    run bash -c "printf '3\n2\n2\n10\n5\n3\n3\n' | ../level1/demo3"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"50.00"* ]]
    [[ "$output" == *"10.000000"* ]]
    [[ "$output" == *"5.000000"* ]]
    [[ "$output" == *"Index : 1"* ]]
}

@test "demo3 test 3 - Rectangle 3 is largest" {
    run bash -c "printf '3\n2\n2\n3\n3\n10\n5\n' | ../level1/demo3"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"50.00"* ]]
    [[ "$output" == *"10.000000"* ]]
    [[ "$output" == *"5.000000"* ]]
    [[ "$output" == *"Index : 2"* ]]
}

@test "demo3 test 4 - Only 1 rectangle" {
    run bash -c "printf '1\n6\n4\n' | ../level1/demo3"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"24.00"* ]]
    [[ "$output" == *"Index : 0"* ]]
}

@test "demo3 test 5 - Equal areas" {
    run bash -c "printf '3\n4\n4\n4\n4\n4\n4\n' | ../level1/demo3"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"16.00"* ]]
    [[ "$output" == *"Index : 0"* ]]
}

@test "demo3 test 6 - Float dimensions" {
    run bash -c "printf '2\n5.5\n3.5\n2.0\n2.0\n' | ../level1/demo3"
    echo $output >&3
    [ "$status" -eq 0 ]
    [[ "$output" == *"19.25"* ]]
    [[ "$output" == *"Index : 0"* ]]
}


quit