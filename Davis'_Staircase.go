package main

import "fmt"

var stairs [36]int

func main() {
	s := 0
	n := 0
	stairs[0] = 1
	stairs[1] = 2
	stairs[2] = 4
	fmt.Scanln(&s)
	for s > 0 {
		fmt.Scanln(&n)
		fmt.Println(stair(n))
		s--
	}

}
func stair(num int) int {
	if stairs[num-1] != 0 {
		return stairs[num-1]
	}
	stairs[num-1] = stair(num-1) + stair(num-2) + stair(num-3)
	return stairs[num-1]
}
