package main

//it is not working
import (
	"fmt"
)

func main() {
	s := 0
	n := 0
	fmt.Scanln(&s)
	ch := make(chan int)
	for s > 0 {
		fmt.Scanln(&n)
		go stairchan(n, ch)
		ans := <-ch
		fmt.Println(ans)
		s--
	}

}
func stair(num int) int {
	if num == 1 {

		return 1
	}
	if num == 2 {

		return 2
	}
	if num == 3 {

		return 4
	}
	return stair(num-1) + stair(num-2) + stair(num-3)

}
func stairchan(num int, ch chan int) {
	ch <- stair(num)
	return
}
